#include "Stack_Complete.hpp"
#include "gtest/gtest.h"

using namespace training;

TEST(Stack, Usage)
{
  Stack<std::string> stack = { "a", "b", "c" };
  EXPECT_EQ(stack.size(), 3);
  EXPECT_FALSE(stack.empty());
  EXPECT_EQ(stack.peek(), "c");

  const std::string element = stack.pop();
  EXPECT_EQ(element, "c");
  EXPECT_EQ(stack.size(), 2);
  EXPECT_EQ(stack.peek(), "b");

  stack.push("d");
  EXPECT_EQ(stack.size(), 3);
  EXPECT_EQ(stack.peek(), "d");

  stack.pop();
  stack.pop();
  stack.pop();
  EXPECT_TRUE(stack.empty());
  ASSERT_THROW(stack.peek(), std::out_of_range);
  ASSERT_THROW(stack.pop(), std::out_of_range);
}
