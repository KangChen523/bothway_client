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


class TestProcessorEventHandler : public TProcessorEventHandler {
    void* getContext(const char* fn_name, void* serverContext) override {

        (void)serverContext;
        return new std::string(fn_name);
    }
    void freeContext(void* ctx, const char* fn_name) override {
        (void)fn_name;
        delete static_cast<std::string*>(ctx);
    }
    void preRead(void* ctx, const char* fn_name) override { communicate("preRead", ctx, fn_name); }
    void postRead(void* ctx, const char* fn_name, uint32_t bytes) override {
        (void)bytes;
        communicate("postRead", ctx, fn_name);
    }
    void preWrite(void* ctx, const char* fn_name) override { communicate("preWrite", ctx, fn_name); }
    void postWrite(void* ctx, const char* fn_name, uint32_t bytes) override {
        (void)bytes;
        communicate("postWrite", ctx, fn_name);
    }
    void asyncComplete(void* ctx, const char* fn_name) override {
        communicate("asyncComplete", ctx, fn_name);
    }
    void handlerError(void* ctx, const char* fn_name) override {
        communicate("handlerError", ctx, fn_name);
    }

    void communicate(const char* event, void* ctx, const char* fn_name) {
        std::cout << event << ": " << *static_cast<std::string*>(ctx) << " = " << fn_name << std::endl;
    }
};
class bothwayProcessorM : public bothwayProcessor
{
public:
    bothwayProcessorM(::std::shared_ptr<bothwayIf> iface):bothwayProcessor(iface){};
protected:
    bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext)
    {
        std::cout <<"bothwayProcessorM: " << iprot->getInputTransport()->getOrigin() << std::endl;

        bothwayProcessor::dispatchCall(iprot,oprot,fname,seqid,callContext);
    }
};

static void Run(std::shared_ptr<TTransport> sock)
{
    std::shared_ptr<bothwayClientIfc> handler(new bothwayClientIfc());
    std::shared_ptr<TProcessor> processor(new bothwayProcessorM(handler));
    processor->setEventHandler(std::shared_ptr<TProcessorEventHandler>(new TestProcessorEventHandler()));
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
    std::shared_ptr<TTransport> transport(new TFramedTransport(socket));
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
