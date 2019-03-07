#pragma once

#include <string>
#include "Board.hpp"
#include "Mark.hpp"

using namespace std;

static const string newline = "\n";
static const string XString = "X";
static const string OString = "O";
static const string welcomeMessage = "Hi! Welcome to Tic Tac Toe";
static const string askForModeMessage = "Please enter one of the following numbers to pick the game mode:"
    + newline + "1 - human vs human" + newline + "2 - human vs computer" + newline +
    "3 - computer vs human" + newline + "4 - computer vs computer";
static const string askForTileMessage = "Please pick a tile";
static const string displayMoveMessage = "Here's the move: ";
static const string winnerMessage = " is the winner!";
static const string drawMessage = "It was a draw...";
static const string invalidInputMessage = "That input was not valid...";

namespace training {
struct UI {
  virtual int getValidMove(const Board &board) = 0;

  virtual void welcome() = 0;

  virtual void displayMove(const Board &board) = 0;

  virtual void announceWinner(Mark mark) = 0;

  virtual void announceDraw() = 0;

  virtual void announceInvalidInput() = 0;

  virtual int getValidMode() = 0;
};
}
// namespace training
