#include <cstring>
#include "String.hpp"

namespace training
{
  String::String(const char* inputString)
  {
    int length = std::strlen(inputString) + 1;
    m_Data = new char[length];

    for(int i = 0; i < length; i++) {
      m_Data[i] = inputString[i];
    }
  }

  String::~String()
  {
    delete[] m_Data;
  }

  char* String::getString()
  {
    return m_Data;
  }

}
