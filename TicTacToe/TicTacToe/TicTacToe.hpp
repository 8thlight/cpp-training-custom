#pragma once

#include "UI.hpp"
#include "CommandLineUI.hpp"
#include "Player.hpp"
#include "HumanPlayer.hpp"
#include "Game.hpp"
#include "RandomPlayer.hpp"

using namespace std;

namespace training {
class TicTacToe {
 public:
  explicit TicTacToe(UI &UI, int dimension);

  void start();

 private:
  UI &m_UI;
  int m_Dimension;

  array<unique_ptr<Player>, 2> makePlayers(int mode);
};
}