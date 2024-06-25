#ifndef HADES_QUERY_H_
#define HADES_QUERY_H_

#include <string>

class QueryServer {

  public:
	QueryServer() {}
	
	void Execute(std::string queryString);

	~QueryServer(){}

};

#endif
