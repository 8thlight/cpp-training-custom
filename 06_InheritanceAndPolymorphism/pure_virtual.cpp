#include <iostream>

using namespace std;

namespace training
{

  // INTERFACE

  struct IShape
  {
    virtual double area() const = 0;

    virtual ~IShape() {}
  };

  class Square : public IShape
  {
    public:
      Square(double size)
        : m_Size(size)
      {}

      double area() const override
      {
        return m_Size * m_Size;
      }

    private:
      double m_Size;
  };

  void printAreaOf(const IShape& shape) {
    cout << shape.area() << endl;
  }

  void interface()
  {
    cout << "**Interface**" << endl;
    // Shape shape;  // cannot instantiate an instance
    Square square(2);
    printAreaOf(square);
  }


  ///////////////////////////////////////////////////

  // ABSTRACT CLASS

  class Greeting
  {
    public:
      string get() const
      {
        return  "Welcome " + specificGreeting() + ". How may I be of service?";
      }

    protected:
      ~Greeting() {}

    private:
      virtual string specificGreeting() const = 0;

  };

  class PoliteGreeting : public Greeting
  {
    private:
      string specificGreeting() const
      {
        return "honored guest";
      }
  };

  class RudeGreeting : public Greeting
  {
    private:
      string specificGreeting() const
      {
        return "lowlife";
      }
  };


  void output(const Greeting& greeting)
  {
    cout << greeting.get() << endl;
  }

  void abstractClass()
  {
    cout << "**Abstract class**" << endl;
    // Greeting greeting;  // cannot instantiate an instance
    PoliteGreeting politeGreeting;
    RudeGreeting rudeGreeting;
    output(politeGreeting);
    output(rudeGreeting);
  }


  ///////////////////////////////////////////////////

  void pure_virtual() {
    cout << "**Pure virtual**" << endl;
    interface();
    abstractClass();
  }
}
