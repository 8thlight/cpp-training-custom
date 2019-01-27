#include "ExampleClass.hpp"

namespace training
{

  ExampleClass::ExampleClass()
  {
    m_Number = 0;
  }

  ExampleClass::ExampleClass(int number)
  {
    m_Number = number;
  }

  int ExampleClass::getNumber() const
  {
    return m_Number;
  }

  void ExampleClass::setNumber(int number) {
    m_Number = number;
  }

}
