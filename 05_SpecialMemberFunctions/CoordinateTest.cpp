#include <gtest/gtest.h>
#include "Coordinate.hpp"

TEST(Coordinate, ValueEquality)
{
  training::Coordinate coordinate(1, 2);
  training::Coordinate otherCoordinate(1,2);
  //EXPECT_EQ(coordinate, otherCoordinate);
}
