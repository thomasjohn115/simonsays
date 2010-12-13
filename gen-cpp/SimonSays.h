/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef SimonSays_H
#define SimonSays_H

#include <TProcessor.h>
#include "simonsays_types.h"



class SimonSaysIf {
 public:
  virtual ~SimonSaysIf() {}
  virtual bool registerClient(const std::string& email) = 0;
  virtual void startTurn(std::vector<Color> & _return) = 0;
  virtual bool chooseColor(const Color colorChosen) = 0;
  virtual bool endTurn() = 0;
  virtual void winGame(std::string& _return) = 0;
};

class SimonSaysNull : virtual public SimonSaysIf {
 public:
  virtual ~SimonSaysNull() {}
  bool registerClient(const std::string& /* email */) {
    bool _return = false;
    return _return;
  }
  void startTurn(std::vector<Color> & /* _return */) {
    return;
  }
  bool chooseColor(const Color /* colorChosen */) {
    bool _return = false;
    return _return;
  }
  bool endTurn() {
    bool _return = false;
    return _return;
  }
  void winGame(std::string& /* _return */) {
    return;
  }
};

class SimonSays_registerClient_args {
 public:

  SimonSays_registerClient_args() : email("") {
  }

  virtual ~SimonSays_registerClient_args() throw() {}

  std::string email;

  struct __isset {
    __isset() : email(false) {}
    bool email;
  } __isset;

  bool operator == (const SimonSays_registerClient_args & rhs) const
  {
    if (!(email == rhs.email))
      return false;
    return true;
  }
  bool operator != (const SimonSays_registerClient_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SimonSays_registerClient_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_registerClient_pargs {
 public:


  virtual ~SimonSays_registerClient_pargs() throw() {}

  const std::string* email;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_registerClient_result {
 public:

  SimonSays_registerClient_result() : success(0) {
  }

  virtual ~SimonSays_registerClient_result() throw() {}

  bool success;

  struct __isset {
    __isset() : success(false) {}
    bool success;
  } __isset;

  bool operator == (const SimonSays_registerClient_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const SimonSays_registerClient_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SimonSays_registerClient_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_registerClient_presult {
 public:


  virtual ~SimonSays_registerClient_presult() throw() {}

  bool* success;

  struct __isset {
    __isset() : success(false) {}
    bool success;
  } __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class SimonSays_startTurn_args {
 public:

  SimonSays_startTurn_args() {
  }

  virtual ~SimonSays_startTurn_args() throw() {}


  bool operator == (const SimonSays_startTurn_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const SimonSays_startTurn_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SimonSays_startTurn_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_startTurn_pargs {
 public:


  virtual ~SimonSays_startTurn_pargs() throw() {}


  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_startTurn_result {
 public:

  SimonSays_startTurn_result() {
  }

  virtual ~SimonSays_startTurn_result() throw() {}

  std::vector<Color>  success;

  struct __isset {
    __isset() : success(false) {}
    bool success;
  } __isset;

  bool operator == (const SimonSays_startTurn_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const SimonSays_startTurn_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SimonSays_startTurn_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_startTurn_presult {
 public:


  virtual ~SimonSays_startTurn_presult() throw() {}

  std::vector<Color> * success;

  struct __isset {
    __isset() : success(false) {}
    bool success;
  } __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class SimonSays_chooseColor_args {
 public:

  SimonSays_chooseColor_args() {
  }

  virtual ~SimonSays_chooseColor_args() throw() {}

  Color colorChosen;

  struct __isset {
    __isset() : colorChosen(false) {}
    bool colorChosen;
  } __isset;

  bool operator == (const SimonSays_chooseColor_args & rhs) const
  {
    if (!(colorChosen == rhs.colorChosen))
      return false;
    return true;
  }
  bool operator != (const SimonSays_chooseColor_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SimonSays_chooseColor_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_chooseColor_pargs {
 public:


  virtual ~SimonSays_chooseColor_pargs() throw() {}

  const Color* colorChosen;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_chooseColor_result {
 public:

  SimonSays_chooseColor_result() : success(0) {
  }

  virtual ~SimonSays_chooseColor_result() throw() {}

  bool success;

  struct __isset {
    __isset() : success(false) {}
    bool success;
  } __isset;

  bool operator == (const SimonSays_chooseColor_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const SimonSays_chooseColor_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SimonSays_chooseColor_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_chooseColor_presult {
 public:


  virtual ~SimonSays_chooseColor_presult() throw() {}

  bool* success;

  struct __isset {
    __isset() : success(false) {}
    bool success;
  } __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class SimonSays_endTurn_args {
 public:

  SimonSays_endTurn_args() {
  }

  virtual ~SimonSays_endTurn_args() throw() {}


  bool operator == (const SimonSays_endTurn_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const SimonSays_endTurn_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SimonSays_endTurn_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_endTurn_pargs {
 public:


  virtual ~SimonSays_endTurn_pargs() throw() {}


  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_endTurn_result {
 public:

  SimonSays_endTurn_result() : success(0) {
  }

  virtual ~SimonSays_endTurn_result() throw() {}

  bool success;

  struct __isset {
    __isset() : success(false) {}
    bool success;
  } __isset;

  bool operator == (const SimonSays_endTurn_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const SimonSays_endTurn_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SimonSays_endTurn_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_endTurn_presult {
 public:


  virtual ~SimonSays_endTurn_presult() throw() {}

  bool* success;

  struct __isset {
    __isset() : success(false) {}
    bool success;
  } __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class SimonSays_winGame_args {
 public:

  SimonSays_winGame_args() {
  }

  virtual ~SimonSays_winGame_args() throw() {}


  bool operator == (const SimonSays_winGame_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const SimonSays_winGame_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SimonSays_winGame_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_winGame_pargs {
 public:


  virtual ~SimonSays_winGame_pargs() throw() {}


  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_winGame_result {
 public:

  SimonSays_winGame_result() : success("") {
  }

  virtual ~SimonSays_winGame_result() throw() {}

  std::string success;

  struct __isset {
    __isset() : success(false) {}
    bool success;
  } __isset;

  bool operator == (const SimonSays_winGame_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const SimonSays_winGame_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SimonSays_winGame_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SimonSays_winGame_presult {
 public:


  virtual ~SimonSays_winGame_presult() throw() {}

  std::string* success;

  struct __isset {
    __isset() : success(false) {}
    bool success;
  } __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class SimonSaysClient : virtual public SimonSaysIf {
 public:
  SimonSaysClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  SimonSaysClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  bool registerClient(const std::string& email);
  void send_registerClient(const std::string& email);
  bool recv_registerClient();
  void startTurn(std::vector<Color> & _return);
  void send_startTurn();
  void recv_startTurn(std::vector<Color> & _return);
  bool chooseColor(const Color colorChosen);
  void send_chooseColor(const Color colorChosen);
  bool recv_chooseColor();
  bool endTurn();
  void send_endTurn();
  bool recv_endTurn();
  void winGame(std::string& _return);
  void send_winGame();
  void recv_winGame(std::string& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class SimonSaysProcessor : virtual public ::apache::thrift::TProcessor {
 protected:
  boost::shared_ptr<SimonSaysIf> iface_;
  virtual bool process_fn(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, std::string& fname, int32_t seqid);
 private:
  std::map<std::string, void (SimonSaysProcessor::*)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*)> processMap_;
  void process_registerClient(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_startTurn(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_chooseColor(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_endTurn(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_winGame(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
 public:
  SimonSaysProcessor(boost::shared_ptr<SimonSaysIf> iface) :
    iface_(iface) {
    processMap_["registerClient"] = &SimonSaysProcessor::process_registerClient;
    processMap_["startTurn"] = &SimonSaysProcessor::process_startTurn;
    processMap_["chooseColor"] = &SimonSaysProcessor::process_chooseColor;
    processMap_["endTurn"] = &SimonSaysProcessor::process_endTurn;
    processMap_["winGame"] = &SimonSaysProcessor::process_winGame;
  }

  virtual bool process(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot);
  virtual ~SimonSaysProcessor() {}
};

class SimonSaysMultiface : virtual public SimonSaysIf {
 public:
  SimonSaysMultiface(std::vector<boost::shared_ptr<SimonSaysIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~SimonSaysMultiface() {}
 protected:
  std::vector<boost::shared_ptr<SimonSaysIf> > ifaces_;
  SimonSaysMultiface() {}
  void add(boost::shared_ptr<SimonSaysIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  bool registerClient(const std::string& email) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        return ifaces_[i]->registerClient(email);
      } else {
        ifaces_[i]->registerClient(email);
      }
    }
  }

  void startTurn(std::vector<Color> & _return) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->startTurn(_return);
        return;
      } else {
        ifaces_[i]->startTurn(_return);
      }
    }
  }

  bool chooseColor(const Color colorChosen) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        return ifaces_[i]->chooseColor(colorChosen);
      } else {
        ifaces_[i]->chooseColor(colorChosen);
      }
    }
  }

  bool endTurn() {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        return ifaces_[i]->endTurn();
      } else {
        ifaces_[i]->endTurn();
      }
    }
  }

  void winGame(std::string& _return) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->winGame(_return);
        return;
      } else {
        ifaces_[i]->winGame(_return);
      }
    }
  }

};



#endif
