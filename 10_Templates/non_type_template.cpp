#include <string>
#include <iostream>

using namespace std;

namespace training
{
  template <typename T, int N>
  class Array
  {
    public:
      T& operator[](int index)
      {
        return m_Elements[index];
      }

    private:
      T m_Elements[N];
  };


  void nonTypeTemplate()
  {
    cout << "**Non-type template" << endl;
    Array<string, 5> array;
    array[1] = "Blah";
    cout << array[1] << endl;
  }
}
