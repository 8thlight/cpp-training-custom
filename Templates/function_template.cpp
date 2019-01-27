#include <iostream>

using namespace std;

namespace training
{
  template <typename T>
  T max(T a, T b)
  {
    return a > b ? a : b;
  }


  void templateFunction()
  {
    cout << "**Template function**" << endl;

    cout << max(1, 4) << endl;
    cout << max(7.5f, 7.0f) << endl;

    cout << max<double>(3.2, 5.6) << endl;

    // cout << max(3, "blah") << endl;
  }
}

