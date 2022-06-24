/**
 * @file bothway_client.h
 * @author KangChen
 * @brief
 * @project bothway_client
 * @date 2022-06-23
 * Copyright (c)  2020 Sieyuan Hongrui Automation Co., Ltd All rights reserved.
 */

#ifndef BOTHWAY_CLIENT_BOTHWAY_CLIENT_H
#define BOTHWAY_CLIENT_BOTHWAY_CLIENT_H


#include <iostream>
#include <string>
#include <memory>
#include "bothway.h"

#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>


using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::concurrency;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;

using namespace  ::bothway;

class bothwayClientIfc : virtual public bothwayIf {
public:
    bothwayClientIfc();

    void sayHello(const std::string& msg);

    void test(const std::string& msg);



};


#endif //BOTHWAY_CLIENT_BOTHWAY_CLIENT_H
