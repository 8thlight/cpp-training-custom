//#include "roman_numerals_converter.hpp"
//#include <gtest/gtest.h>
//#include <vector>

//using namespace training;

//TEST(RomanNumerals, ConvertsArabicNumberToNumeral)
//{
//  RomanNumeralsConverter converter;
//  auto conversions = { std::make_pair(1, "I"),
//                       std::make_pair(2, "II"),
//                       std::make_pair(3, "III"),
//                       std::make_pair(4, "IV"),
//                       std::make_pair(5, "V"),
//                       std::make_pair(10, "X"),
//                       std::make_pair(11, "XI"),
//                       std::make_pair(12, "XII"),
//                       std::make_pair(13, "XIII"),
//                       std::make_pair(20, "XX"),
//                       std::make_pair(50, "L"),
//                       std::make_pair(80, "LXXX"),
//                       std::make_pair(100, "C"),
//                       std::make_pair(288, "CCLXXXVIII"),
//                       std::make_pair(2999, "MMCMXCIX"),
//                       std::make_pair(1513, "II") };
//
//  for (const auto& expected : conversions) {
//    EXPECT_EQ(converter.convert(expected.first), expected.second);
//  }
//}
