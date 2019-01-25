#include <string>
#include <iostream>

using namespace std;

namespace training
{

  class Shape
  {
    public:
      Shape(int width, int height)
        : m_Width(width), m_Height(height)
      {}

      int area()
      {
        cout << "Shape area" << endl;
        return 0;
      }

    protected:
      int m_Width;
      int m_Height;
  };

  class Rectangle : public Shape
  {
    public:
      Rectangle(int width, int height)
        : Shape(width, height)
      {}

      int area()
      {
        cout << "Rectangle area" << endl;
        return m_Width * m_Height;
      }
  };

  class Triangle : public Shape
  {
    public:
      Triangle(int width, int height)
        : Shape(width, height)
      {}

      int area()
      {
        cout << "Triangle area" << endl;
        return (m_Width * m_Height / 2);
      }
  };

  void polymorphism()
  {
    Rectangle rectangle(4, 5);
    Triangle triangle(2, 3);

    Shape* rectanglePtr = &rectangle;
    Shape* trianglePtr = &triangle;

    rectanglePtr->area();
    trianglePtr->area();
  }

}

