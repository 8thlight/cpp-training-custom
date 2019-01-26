#include <iostream>

using namespace std;

namespace training
{

  class Shape
  {
    public:
      Shape(double width, double height)
        : m_Width(width), m_Height(height)
      {}

      // virtual
      double area()
      {
        cout << "Shape area" << endl;
        return 0;
      }

    protected:
      double m_Width;
      double m_Height;
  };

  class Rectangle : public Shape
  {
    public:
      Rectangle(double width, double height)
        : Shape(width, height)
      {}

      double area() // override
      {
        cout << "Rectangle area" << endl;
        return m_Width * m_Height;
      }
  };

  class Triangle : public Shape
  {
    public:
      Triangle(double width, double height)
        : Shape(width, height)
      {}

      double area()
      {
        cout << "Triangle area" << endl;
        return (m_Width * m_Height / 2);
      }
  };

  void polymorphism()
  {
    cout << "**Polymorphism**" << endl;
    Rectangle rectangle(4, 5);
    Triangle triangle(2, 3);

    Shape* rectanglePtr = &rectangle;
    Shape* trianglePtr = &triangle;

    rectanglePtr->area();
    trianglePtr->area();
  }

}

