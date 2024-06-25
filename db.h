#ifndef HADES_DB_H_
#define HADES_DB_H_

#include <string>
#include "query.h"

class DBServer {
  private:
	  QueryServer query_server;
  public:
    DBServer() {
    
    }
    ~DBServer() {}
};

#endif
