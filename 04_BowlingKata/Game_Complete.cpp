#include "Game_Complete.hpp"

namespace training
{
  Game::Game()
    : m_CurrentRoll(0)
  {}

  void Game::roll(int pins)
  {
    m_Rolls[m_CurrentRoll++] = pins;
  }

  int Game::score()
  {
    int score = 0;
    int frameIndex = 0;
    for (int frame = 0; frame < 10; frame++)
    {
      if (isStrike(frameIndex))
      {
        score += 10 + strikeBonus(frameIndex);
        frameIndex++;
      }
      else if (isSpare(frameIndex))
      {
        score += 10 + spareBonus(frameIndex);
        frameIndex += 2;
      }
      else {
        score += sumOfBallsInFrame(frameIndex);
        frameIndex += 2;
      }
    }
    return score;
  }

  bool Game::isStrike(int frameIndex)
  {
    return m_Rolls[frameIndex] == 10;
  }

  int Game::strikeBonus(int frameIndex)
  {
    return m_Rolls[frameIndex+1] + m_Rolls[frameIndex+2];
  }

  bool Game::isSpare(int frameIndex)
  {
    return (m_Rolls[frameIndex] + m_Rolls[frameIndex+1] == 10);
  }

  int Game::spareBonus(int frameIndex)
  {
    return m_Rolls[frameIndex+2];
  }

  int Game::sumOfBallsInFrame(int frameIndex)
  {
    return m_Rolls[frameIndex] + m_Rolls[frameIndex+1];
  }
}
