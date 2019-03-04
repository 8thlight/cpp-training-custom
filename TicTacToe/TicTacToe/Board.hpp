#pragma once

#include "Mark.hpp"
#include <vector>
#include <array>

using namespace std;

namespace training {
	class Board {

	public:
		explicit Board(int dimension);

		void setMark(int position, Mark mark);

		bool isGameOver() const;

		static Board withMarks(const vector<Mark> & marks);

		bool isWin() const;

		bool isDraw() const;

		bool tileOccupied(int position) const;

		Mark getMark(int position) const;

		const int getDimension() const;

	private:
		const int m_Dimension;
		vector<Mark> m_Marks;

		bool anyLineWin(vector<vector<int>> lines) const;

		bool isLineWin(vector<int> positions) const;

		bool allMarksIdentical(vector<int> positions) const;

		vector<vector<int>> getColumnIndices() const;

		vector<int> getColStartingValues() const;

		vector<int> makeCol(int startingValue) const;

		vector<vector<int>> getRowIndices() const;

		vector<int> getRowStartingValues() const;

		vector<int> makeRow(int startingValue) const;

		vector<vector<int>> getDiagIndices() const;

		vector<int> makeLeftDiag() const;

		vector<int> makeRightDiag() const;
	};
}