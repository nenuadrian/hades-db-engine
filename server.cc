#include "db.h"
#include <iostream>

int main(int argc, char** argv) {
  std::cout << "Starting server..." << std::endl;
  auto db_server = DBServer();
  return 0;
}
