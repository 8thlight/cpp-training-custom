#include <string>

namespace training
{
  class Animal
  {
    public:
      Animal(const std::string& name);

      std::string greeting();

    private:
      virtual std::string sound() = 0;

      std::string m_Name;
  };

  class Dog : public Animal
  {
    public:
      Dog(const std::string& name);

    private:
      std::string sound();
  };

  class Cat : public Animal
  {
    public:
      Cat(const std::string& name);

    private:
      std::string sound();
  };

  class Cow : public Animal
  {
    public:
      Cow(const std::string& name);

    private:
      std::string sound();
  };
}
