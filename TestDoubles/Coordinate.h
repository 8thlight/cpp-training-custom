#ifndef __OO_TRAINING_DOUBLES_HPP__
#define __OO_TRAINING_DOUBLES_HPP__

struct Coordinate {
  Coordinate(int x, int y)
    : x(x), y(y)
  {}

  bool operator==(const Coordinate& other) const {
    return x == other.x && y == other.y;
  }

  int x;
  int y;
};

#endif
