#include <cstring>
#include "String_Fixed.hpp"

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

  String::String(const String& other)
    : String(other.m_Data) // leverage the default constructor
  {}

  // Note: uses 'copy and swap' idiom
  String& String::operator=(String other) // let copy constructor make temp copy
  {
    // swap data with temp copy
    m_Data = other.m_Data;
    other.m_Data = nullptr;

    return *this;
  } // temp copy goes out of scope and is cleaned up

  String::~String()
  {
    delete[] m_Data;
  }

  char* String::getString()
  {
    return m_Data;
  }

}
