#include "Game.hpp"
#include <gtest/gtest.h>

TEST(Bowling, ScoresAZeroGame) {
  Game game;
  for (int i = 0; i < 20; i++) {
    game.roll(0);
  }
  EXPECT_EQ(game.score(), 0);
}
