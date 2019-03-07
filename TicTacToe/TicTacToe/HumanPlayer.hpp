// Copyright 2019 < 8th Light >

#pragma once

#include "Mark.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include "UI.hpp"
#include "CommandLineUI.hpp"

namespace training {
class HumanPlayer : public Player {
 public:
  explicit HumanPlayer(Mark mark, UI *UI);

  int getMove(const Board &board) override;

 private:
  UI &m_UI;
};
}  // namespace training
