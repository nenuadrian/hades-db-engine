#include <gtest/gtest.h>
#include "query.h"
#include "parser.h"

TEST(QueryTest, BasicStart) {
  auto query_server = QueryServer();

  EXPECT_TRUE(true);
}

TEST(QueryTest, Tokenizer) {
  auto tokenizer = Tokenizer();

  auto result = tokenizer.tokenize("SELECT * from users;");

  EXPECT_EQ(result.size(), 5);
}

