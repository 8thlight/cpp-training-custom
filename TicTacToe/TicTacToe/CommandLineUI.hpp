// Copyright 2019 < 8th Light >

#pragma once

#include <string>
#include <windows.h>
#include <iostream>
#include "Board.hpp"
#include "Mode.hpp"
#include "Mark.hpp"
#include "UI.hpp"

namespace training {
class CommandLineUI : public UI {
 public:
  explicit CommandLineUI(istream &input = cin,
                         ostream &output = cout,
                         int delayTime = 1500);

  int getValidMove(const Board &board) override;

  void welcome() override;

  void displayMove(const Board &board) override;

  void announceWinner(Mark mark) override;

  void announceDraw() override;

  void announceInvalidInput() override;

  int getValidMode() override;

 private:
  istream &m_Input;
  ostream &m_Output;
  int m_DelayTime;

  string getInput();

  bool isInputValid(string input, const Board &board);

  string getMarkAsString(Mark mark, int number);

  string getOccupiedMarkAsString(Mark mark);

  string getTileInput(const Board &board);

  string getModeInput();

  void askForTile(const Board &m_Board);

  bool isModeValid(string input);

  string outputBoard(const Board &m_Board);
};
}  // namespace training
