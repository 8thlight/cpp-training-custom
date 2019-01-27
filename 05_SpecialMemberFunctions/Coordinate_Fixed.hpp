#ifndef __TRAINING_COORDINATE_HPP__
#define __TRAINING_COORDINATE_HPP__

namespace training
{
  struct Coordinate
  {
    Coordinate(int x, int y)
     : m_X(x), m_Y(y)
    {}

    bool operator==(const Coordinate& other) const
    {
      return (m_X == other.m_X && m_Y == other.m_Y);
    }

    int m_X;
    int m_Y;
  };
}

#endif
