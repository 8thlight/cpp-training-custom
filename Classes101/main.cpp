#include "basic_class.hpp"
#include <gtest/gtest.h>

using namespace training;

int main(int argc, char**argv) {
  //basicClassUsage();
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
