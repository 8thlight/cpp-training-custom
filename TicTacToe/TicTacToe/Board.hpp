#pragma once

#include "Mark.hpp"
#include <vector>
#include <array>

using namespace std;

typedef vector <vector<int>> doubleVector;

namespace training {
    class Board {

    public:
        explicit Board(int dimension);

        void setMark(int position, Mark mark);

        bool isGameOver() const;

        static Board withMarks(const vector <Mark> &marks);

        bool isWin() const;

        bool isDraw() const;

        bool tileOccupied(int position) const;

        Mark getMark(int position) const;

        const int getDimension() const;

    private:
        const int m_Dimension;
        vector <Mark> m_Marks;

        bool anyLineWin(doubleVector lines) const;

        bool isLineWin(vector<int> positions) const;

        bool allMarksIdentical(vector<int> positions) const;

        doubleVector getColumnIndices() const;

        vector<int> getColStartingValues() const;

        vector<int> makeCol(int startingValue) const;

        doubleVector getRowIndices() const;

        vector<int> getRowStartingValues() const;

        vector<int> makeRow(int startingValue) const;

        doubleVector getDiagIndices() const;

        vector<int> makeLeftDiag() const;

        vector<int> makeRightDiag() const;
    };
}