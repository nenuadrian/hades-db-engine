#include "query.h"
#include "parser.h"
#include <string>

void QueryServer::Execute(std::string queryString) {
  auto tokenizer = Tokenizer();
  auto parser = Parser();
}
