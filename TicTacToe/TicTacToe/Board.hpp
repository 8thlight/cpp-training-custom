#pragma once

#include "Mark.hpp"
#include <vector>
#include <array>

using namespace std;

typedef vector <vector<int>> twoDVector;

namespace training {
class Board {

 public:
  explicit Board(int dimension);

  void setMark(int position, Mark mark);

  bool isGameOver() const;

  bool isWin() const;

  bool isDraw() const;

  bool tileOccupied(int position) const;

  Mark getMark(int position) const;

  int getDimension() const;

 private:
  const int m_Dimension;
  vector <Mark> m_Marks;

  bool anyLineWin(const twoDVector &lines) const;

  bool isLineWin(const vector<int> &positions) const;

  bool allMarksIdentical(const vector<int> &positions) const;

  twoDVector getColumnIndices() const;

  vector<int> getColStartingValues() const;

  vector<int> makeCol(int startingValue) const;

  twoDVector getRowIndices() const;

  vector<int> getRowStartingValues() const;

  vector<int> makeRow(int startingValue) const;

  twoDVector getDiagIndices() const;

  vector<int> makeLeftDiag() const;

  vector<int> makeRightDiag() const;
};
}