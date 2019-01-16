#include "roman_numerals_converter.hpp"
#include <gtest/gtest.h>

using namespace training;

TEST(RomanNumerals, ConvertsArabicNumberOneToNumeral) {
  RomanNumeralsConverter converter;

  EXPECT_EQ(converter.convert(1), "I");
}