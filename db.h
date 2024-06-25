#ifndef HADES_DB_H_
#define HADES_DB_H_

#include <string>
#include "query.h"
#include "files.h"

class DBServer {
  private:
	  QueryServer query_server;
	  FileManager file_manager;
  public:
    DBServer() {
    
    }
    ~DBServer() {}
};

#endif
