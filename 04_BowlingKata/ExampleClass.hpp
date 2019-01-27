#ifndef __TRAINING__EXAMPLECLASS_HPP__
#define __TRAINING__EXAMPLECLASS_HPP__

namespace training
{
  class ExampleClass
  {
    public:
      // default constructor
      ExampleClass();

      // constructor
      ExampleClass(int number);

      int getNumber() const;

      void setNumber(int number);

    private:
      int m_Number;
  };
}

#endif
