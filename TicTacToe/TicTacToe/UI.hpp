// Copyright 2019 < 8th Light >

#pragma once

#include <string>
#include "Board.hpp"
#include "Mark.hpp"

using std::string;

static const string newline = "\n";
static const char XString[] = "X";
static const char OString[] = "O";
static const char welcomeMessage[] = "Hi! Welcome to Tic Tac Toe";
static const string askForModeMessage = "Please enter one of the following numbers to pick the game mode:" 
+ newline + "1 - human vs human" + newline + "2 - human vs computer" + newline +
    "3 - computer vs human" + newline + "4 - computer vs computer";
static const char askForTileMessage[] = "Please pick a tile";
static const char displayMoveMessage[] = "Here's the move: ";
static const char winnerMessage[] = " is the winner!";
static const char drawMessage[] = "It was a draw...";
static const char invalidInputMessage[] = "That input was not valid...";

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
}  // namespace training
