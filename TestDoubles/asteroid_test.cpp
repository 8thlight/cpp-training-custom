#include <gtest/gtest.h>
#include "Coordinate.h"

// 'Production' code

struct RandomGenerator {
  virtual int generate() = 0;
};

class Asteroid {
  public:
    Asteroid(RandomGenerator* randomGenerator)
      : _location(0, 0),
        _randomGenerator(randomGenerator)
    {}

    void move() {
      _location.x += _randomGenerator->generate();
      _location.y += _randomGenerator->generate();
    }

    Coordinate location() {
      return _location;
    }

  private:
    Coordinate _location;
    RandomGenerator* _randomGenerator;
};


// Test

struct StubRandomGenerator : RandomGenerator {
  public:
    StubRandomGenerator()
      : numberOfCalls(0)
    {}

    int generate() {
      numberOfCalls++;
      return numberOfCalls;
    }

  int numberOfCalls;
};

TEST(Asteroid, MovesRandomly) {
  StubRandomGenerator randomGenerator;
  Asteroid asteroid(&randomGenerator);

  asteroid.move();

  EXPECT_EQ(asteroid.location(), Coordinate(1,2));
}

