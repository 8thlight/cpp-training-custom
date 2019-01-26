#include <iostream>

using namespace std;

namespace training
{

  class NumberHolder
  {
    public:
      // default constructor
      NumberHolder();

      // constructor
      NumberHolder(int number);

      int getNumber() const;

      void setNumber(int number);

      static void outputNumber(int number);

    private:
      int m_Number;
  };

  NumberHolder::NumberHolder()
    : m_Number(0)                    // initialiser list
  {
    // generally prefer initialiser list
    // we will discuss why a bit later in the course
    // m_Number = 0;
  }

  NumberHolder::NumberHolder(int number)
  {
    m_Number = number;
  }

  int NumberHolder::getNumber() const
  {
    return m_Number;
  }

  void NumberHolder::setNumber(int number) {
    m_Number = number;
  }

  void NumberHolder::outputNumber(int number) {
    // static methods are not associated with a specific
    // instance of the class - they cannot access non-static
    // member variables
    cout << number << endl;
    // cout << m_Number << endl;    // will not compile!
  }


  //////////////////////////////////////////


  void instantiatingAndUsingAClass() {
    NumberHolder stackAllocated(4);
    cout << stackAllocated.getNumber() << endl;

    NumberHolder* heapAllocated = new NumberHolder(5);
    cout << heapAllocated->getNumber() << endl;
    delete heapAllocated;
  }

  void defaultConstruction() {
    NumberHolder holder;
    cout << holder.getNumber() << endl;
  }

  void constMethods() {
    const NumberHolder holder(3);

    cout << holder.getNumber() << endl;

    // holder.setNumber(1);  // will not compile
  }

  void staticMethods() {
    // static methods don't need an instance of class
    NumberHolder::outputNumber(77);
  }

}


int main()
{
  cout << "**Basic class usage**" << endl;
  training::instantiatingAndUsingAClass();
  training::constMethods();
  training::staticMethods();

  return 0;
}
