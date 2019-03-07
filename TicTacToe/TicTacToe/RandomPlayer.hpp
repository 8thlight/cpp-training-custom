#pragma once

#include <stdlib.h>
#include "Player.hpp"
#include "Board.hpp"

namespace training {
class RandomPlayer : public Player {
 public:
  explicit RandomPlayer(Mark mark);

  int getMove(const Board &board) override;

 private:
  int generateRandInRange();
};
}