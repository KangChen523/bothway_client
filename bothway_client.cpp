/**
 * @file bothway_client.cpp
 * @author KangChen
 * @brief
 * @project bothway_client
 * @date 2022-06-23
 * Copyright (c)  2020 Sieyuan Hongrui Automation Co., Ltd All rights reserved.
 */

#include "bothway_client.h"

bothwayClientIfc::bothwayClientIfc()
{

}

void bothwayClientIfc::sayHello(const std::string &msg)
{
    std::cout <<"sayhello recv from svr: "<< msg << std::endl;
}

void bothwayClientIfc::test(const std::string &msg)
{
    std::cout <<"test recv from svr: "<< msg << std::endl;
}

static void Run(std::shared_ptr<TTransport> sock)
{
    std::shared_ptr<bothwayClientIfc> handler(new bothwayClientIfc());
    std::shared_ptr<TProcessor> processor(new bothwayProcessor(handler));

    //boost::shared_ptr<HelloWorldBidirectionServiceProcessor> processor(new HelloWorldBidirectionFace());
    try
    {
        std::shared_ptr<TProtocol> inProtocol(new TBinaryProtocol(sock));
        std::shared_ptr<TProtocol> outProtocol(new TBinaryProtocol(sock));
        while (processor->process(inProtocol, outProtocol, (void*)"proc"))
        {
            printf("wait next msg\n");
        }
    }
    catch (TException& tx)
    {
        printf("connect close\n");
        cout << "ERROR1: " << tx.what() << endl;
    }
}

static void RecFromConsole(std::shared_ptr<bothwayClient> client)
{
    string str;
    cout << "input exit stop" << endl;
    cin >> str;
    while (str.compare("exit"))
    {
        client->sayHello(str);
        client->test("1122");
        cin >> str;
    }
}


int main()
{
    std::shared_ptr<TSocket> socket(new TSocket("localhost", 9090));
    std::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
    std::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
    std::shared_ptr<bothwayClient> client(new bothwayClient(protocol));

    try {
        transport->open();

        std::thread mythread(Run, socket);

        std::thread mythread2(RecFromConsole, client);
        mythread2.join();

        transport->close();
    }
    catch (TException& tx) {
        cout << "ERROR: " << tx.what() << endl;
    }
}
