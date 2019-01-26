#include "RomanNumeralsConverter_Complete.hpp"
#include <vector>

using namespace std;

namespace training
{

  const auto arabicToRomanConversions = {
    make_pair(1000, "M"),
    make_pair(900, "CM"),
    make_pair(500, "D"),
    make_pair(400, "CD"),
    make_pair(100, "C"),
    make_pair(90, "XC"),
    make_pair(50, "L"),
    make_pair(40, "XL"),
    make_pair(10, "X"),
    make_pair(9, "IX"),
    make_pair(5, "V"),
    make_pair(4, "IV"),
    make_pair(1, "I")
  };

  string RomanNumeralsConverter::convert(int arabic)
  {
    string roman = "";
    for (auto arabicToRoman: arabicToRomanConversions)
      while (arabic >= arabicToRoman.first)
      {
        roman += arabicToRoman.second;
        arabic -= arabicToRoman.first;

      }
    return roman;
  }

}
