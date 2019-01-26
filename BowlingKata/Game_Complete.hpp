#ifndef __TRAINING_GAME_HPP__
#define __TRAINING_GAME_HPP__

namespace training
{
  class Game
  {
    public:
      Game();

      void roll(int pins);

      int score();

    private:
      bool isStrike(int frameIndex);
      int strikeBonus(int frameIndex);
      bool isSpare(int frameIndex);
      int spareBonus(int frameIndex);
      int sumOfBallsInFrame(int frameIndex);

      int m_Rolls[21];
      int m_CurrentRoll;
  };
}

#endif
