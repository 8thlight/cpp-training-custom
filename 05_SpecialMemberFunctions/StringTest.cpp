#include <gtest/gtest.h>
#include "String.hpp"

TEST(String, CanBeCopied)
{
  training::String hello("hello");
  {
    training::String copy(hello);
  }
  EXPECT_STREQ(hello.getString(), "hello");
}

