#ifndef __TRAINING_COORDINATE_HPP__
#define __TRAINING_COORDINATE_HPP__

namespace training
{
  struct Coordinate
  {
    Coordinate(int x, int y)
     : m_X(x), m_Y(y)
    {}

    int m_X;
    int m_Y;
  };
}

#endif
