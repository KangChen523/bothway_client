/**
 * Autogenerated by Thrift Compiler (0.15.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef bothway_H
#define bothway_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "bothway_types.h"

namespace bothway {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class bothwayIf {
 public:
  virtual ~bothwayIf() {}
  virtual void sayHello(const std::string& msg) = 0;
  virtual void test(const std::string& msg) = 0;
};

class bothwayIfFactory {
 public:
  typedef bothwayIf Handler;

  virtual ~bothwayIfFactory() {}

  virtual bothwayIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(bothwayIf* /* handler */) = 0;
  };

class bothwayIfSingletonFactory : virtual public bothwayIfFactory {
 public:
  bothwayIfSingletonFactory(const ::std::shared_ptr<bothwayIf>& iface) : iface_(iface) {}
  virtual ~bothwayIfSingletonFactory() {}

  virtual bothwayIf* getHandler(const ::apache::thrift::TConnectionInfo&) override {
    return iface_.get();
  }
  virtual void releaseHandler(bothwayIf* /* handler */) override {}

 protected:
  ::std::shared_ptr<bothwayIf> iface_;
};

class bothwayNull : virtual public bothwayIf {
 public:
  virtual ~bothwayNull() {}
  void sayHello(const std::string& /* msg */) override {
    return;
  }
  void test(const std::string& /* msg */) override {
    return;
  }
};

typedef struct _bothway_sayHello_args__isset {
  _bothway_sayHello_args__isset() : msg(false) {}
  bool msg :1;
} _bothway_sayHello_args__isset;

class bothway_sayHello_args {
 public:

  bothway_sayHello_args(const bothway_sayHello_args&);
  bothway_sayHello_args& operator=(const bothway_sayHello_args&);
  bothway_sayHello_args() noexcept
                        : msg() {
  }

  virtual ~bothway_sayHello_args() noexcept;
  std::string msg;

  _bothway_sayHello_args__isset __isset;

  void __set_msg(const std::string& val);

  bool operator == (const bothway_sayHello_args & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const bothway_sayHello_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const bothway_sayHello_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class bothway_sayHello_pargs {
 public:


  virtual ~bothway_sayHello_pargs() noexcept;
  const std::string* msg;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _bothway_test_args__isset {
  _bothway_test_args__isset() : msg(false) {}
  bool msg :1;
} _bothway_test_args__isset;

class bothway_test_args {
 public:

  bothway_test_args(const bothway_test_args&);
  bothway_test_args& operator=(const bothway_test_args&);
  bothway_test_args() noexcept
                    : msg() {
  }

  virtual ~bothway_test_args() noexcept;
  std::string msg;

  _bothway_test_args__isset __isset;

  void __set_msg(const std::string& val);

  bool operator == (const bothway_test_args & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const bothway_test_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const bothway_test_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class bothway_test_pargs {
 public:


  virtual ~bothway_test_pargs() noexcept;
  const std::string* msg;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class bothwayClient : virtual public bothwayIf {
 public:
  bothwayClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  bothwayClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void sayHello(const std::string& msg) override;
  void send_sayHello(const std::string& msg);
  void test(const std::string& msg) override;
  void send_test(const std::string& msg);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class bothwayProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<bothwayIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) override;
 private:
  typedef  void (bothwayProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_sayHello(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_test(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  bothwayProcessor(::std::shared_ptr<bothwayIf> iface) :
    iface_(iface) {
    processMap_["sayHello"] = &bothwayProcessor::process_sayHello;
    processMap_["test"] = &bothwayProcessor::process_test;
  }

  virtual ~bothwayProcessor() {}
};

class bothwayProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  bothwayProcessorFactory(const ::std::shared_ptr< bothwayIfFactory >& handlerFactory) noexcept :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) override;

 protected:
  ::std::shared_ptr< bothwayIfFactory > handlerFactory_;
};

class bothwayMultiface : virtual public bothwayIf {
 public:
  bothwayMultiface(std::vector<std::shared_ptr<bothwayIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~bothwayMultiface() {}
 protected:
  std::vector<std::shared_ptr<bothwayIf> > ifaces_;
  bothwayMultiface() {}
  void add(::std::shared_ptr<bothwayIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void sayHello(const std::string& msg) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->sayHello(msg);
    }
    ifaces_[i]->sayHello(msg);
  }

  void test(const std::string& msg) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->test(msg);
    }
    ifaces_[i]->test(msg);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class bothwayConcurrentClient : virtual public bothwayIf {
 public:
  bothwayConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  bothwayConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void sayHello(const std::string& msg) override;
  void send_sayHello(const std::string& msg);
  void test(const std::string& msg) override;
  void send_test(const std::string& msg);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

} // namespace

#endif
