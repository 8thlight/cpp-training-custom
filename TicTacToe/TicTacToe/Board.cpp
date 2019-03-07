#include <cmath>
#include <iostream>
#include "Board.hpp"

namespace training {
Board::Board(const int dimension) : m_Dimension(dimension) {
    int size = m_Dimension * m_Dimension;
    m_Marks.assign(static_cast<unsigned _int16>(size), _);
}

void Board::setMark(int position, Mark mark) {
    m_Marks[position - 1] = mark;
}

bool Board::isGameOver() const {
    return isWin() || isDraw();
}

bool Board::isDraw() const {
    return find(begin(m_Marks), end(m_Marks), _) == end(m_Marks);
}

Mark Board::getMark(int position) const {
    return m_Marks[position - 1];
}

bool Board::isWin() const {
    return anyLineWin(getColumnIndices()) ||
        anyLineWin(getRowIndices()) ||
        anyLineWin(getDiagIndices());
}

bool Board::anyLineWin(const twoDVector &lines) const {
    for (const auto &line : lines) {
        if (isLineWin(line)) {
            return true;
        }
    }
    return false;
}

bool Board::isLineWin(const vector<int> &positions) const {
    return m_Marks[positions[0]] != _ && allMarksIdentical(positions);
}

bool Board::allMarksIdentical(const vector<int> &positions) const {
    int firstMark = m_Marks[positions[0]];
    for (auto position : positions) {
        if (m_Marks[position] != firstMark)
            return false;
    }
    return true;
}

twoDVector Board::getColumnIndices() const {
    vector<int> colStartingValues = getColStartingValues();
    twoDVector allCols;
    allCols.reserve((unsigned _int16) m_Dimension);
    for (auto startingValue : colStartingValues) {
        allCols.push_back(makeCol(startingValue));
    }
    return allCols;
}

vector<int> Board::getColStartingValues() const {
    vector<int> colStartingValues;
    colStartingValues.reserve((unsigned _int16) m_Dimension);
    for (int i = 0; i < m_Dimension; ++i) {
        colStartingValues.push_back(i);
    }
    return colStartingValues;
}

vector<int> Board::makeCol(int startingValue) const {
    vector<int> line;
    line.reserve((unsigned _int16) m_Dimension);
    for (int i = 0; i < m_Dimension; ++i) {
        int incrementor = startingValue + i * m_Dimension;
        line.push_back(incrementor);
    }
    return line;
}

twoDVector Board::getRowIndices() const {
    vector<int> rowStartingValues = getRowStartingValues();
    twoDVector allRows;
    allRows.reserve((unsigned _int16) m_Dimension);
    for (auto startingValue : rowStartingValues) {
        allRows.push_back(makeRow(startingValue));
    }
    return allRows;
}

vector<int> Board::getRowStartingValues() const {
    vector<int> rowStartingValues;
    rowStartingValues.reserve((unsigned _int16) m_Dimension);
    for (int i = 0; i < m_Dimension; ++i) {
        rowStartingValues.push_back(i * m_Dimension);
    }
    return rowStartingValues;
}

vector<int> Board::makeRow(int startingValue) const {
    vector<int> line;
    line.reserve((unsigned _int16) m_Dimension);
    for (int i = 0; i < m_Dimension; ++i) {
        line.push_back(startingValue);
        startingValue++;
    }
    return line;
}

twoDVector Board::getDiagIndices() const {
    vector <vector<int>> allDiags;
    allDiags.push_back(makeLeftDiag());
    allDiags.push_back(makeRightDiag());
    return allDiags;
}

vector<int> Board::makeLeftDiag() const {
    vector<int> line;
    line.reserve((unsigned _int16) m_Dimension);
    for (int j = 0; j < m_Dimension; ++j) {
        int incrementor = j * m_Dimension + j;
        line.push_back(incrementor);
    }
    return line;
}

vector<int> Board::makeRightDiag() const {
    vector<int> line;
    line.reserve((unsigned _int16) m_Dimension);
    for (int j = 1; j < m_Dimension + 1; ++j) {
        int incrementor = j * m_Dimension - j;
        line.push_back(incrementor);
    }
    return line;
}

bool Board::tileOccupied(int position) const {
    return !(m_Marks[position - 1] == _);
}

int Board::getDimension() const {
    return m_Dimension;
}
// namespace training 
}
