#include "Game_Complete.hpp"
#include <gtest/gtest.h>

using namespace training;

void rollMany(Game& game, int n, int pins)
{
  for (int i = 0; i < n; i++)
  {
    game.roll(pins);
  }
}

void rollSpare(Game& game)
{
  game.roll(6);
  game.roll(4);
}

void rollStrike(Game& game)
{
  game.roll(10);
}

TEST(Game, ScoresAZeroGame)
{
  Game game;
  rollMany(game, 20, 0);
  EXPECT_EQ(game.score(), 0);
}

TEST(Game, ScoresAllOnes)
{
  Game game;
  rollMany(game, 20, 1);
  EXPECT_EQ(game.score(), 20);
}

TEST(Game, ScoresOneSpare)
{
  Game game;
  rollSpare(game);
  game.roll(3);
  rollMany(game, 17, 0);
  EXPECT_EQ(game.score(), 16);
}

TEST(Game, ScoresOneStrike)
{
  Game game;
  rollStrike(game);
  game.roll(3);
  game.roll(4);
  rollMany(game, 17, 0);
  EXPECT_EQ(game.score(), 24);
}

TEST(Game, ScoresPerfectGame)
{
  Game game;
  rollMany(game, 12, 10);
  EXPECT_EQ(game.score(), 300);
}
