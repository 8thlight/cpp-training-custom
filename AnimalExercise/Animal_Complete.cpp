#include "Animal_Complete.hpp"

using namespace std;

namespace training
{
  Animal::Animal(const string& name)
    : m_Name(name)
  {}

  string Animal::greeting()
  {
    return sound() + "! I'm " + m_Name;
  }



  Dog::Dog(const string& name)
    : Animal(name)
  {}

  string Dog::sound()
  {
    return "WOOF";
  }



  Cat::Cat(const string& name)
    : Animal(name)
  {}

  string Cat::sound()
  {
    return "MEOW";
  }



  Cow::Cow(const string& name)
    : Animal(name)
  {}

  string Cow::sound()
  {
    return "MOO";
  }
}
