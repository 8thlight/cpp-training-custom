// Copyright 2019 < 8th Light >

#pragma once

#include "Player.hpp"
#include "Board.hpp"
#include "UI.hpp"

using namespace std;

namespace training {
class Game {
 public:
  Game(Player &playerOne, Player &playerTwo, UI *UI, int dimension);

  void play();

  bool isGameOver();

 private:
  Board m_Board;
  Player &m_PlayerOne;
  Player &m_PlayerTwo;
  UI &m_UI;

  void playAllTurns(Player *activePlayer);

  void playTurn(Player *activePlayer);

  void announceResult(Player *activePlayer);

  Player *alternate(Player *activePlayer);
};
}  // namespace training
