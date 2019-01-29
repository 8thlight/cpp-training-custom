#include <iostream>
#include <string>

using namespace std;

namespace training
{
  template <typename U, typename V>
  struct Pair
  {
    Pair(U first, V second)
      : first(first), second(second)
    {}

    bool operator<(const Pair<U,V>& other);

    U first;
    V second;
  };


  template <typename U, typename V>
  bool Pair<U,V>::operator<(const Pair<U,V>& other)
  {
      return (first < other.first || second < other.second);
  }


  void templateClass() {
    cout << "**Template class**" << endl;

    Pair<int, string> pair1(4, "aha");
    Pair<int, string> pair2(4, "zebra");

    string smallest = (pair1 < pair2) ? "pair1" : "pair2";
    cout << smallest << endl;
  }

}
