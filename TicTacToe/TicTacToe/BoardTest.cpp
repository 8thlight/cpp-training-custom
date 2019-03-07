// Copyright 2019 < 8th Light >

#include "gtest/gtest.h"
#include "Board.hpp"
#include "Mark.hpp"

namespace training {
	Board setBoardMarks(const vector<Mark> & marks) {
		int thisDimension = static_cast<int>(sqrt(marks.size()));
		Board board(thisDimension);
		for (unsigned int i = 0; i < marks.size(); i++) {
			board.setMark(i + 1, marks[i]);
		}
		return board;
	}

	TEST(Board, EmptyBoardCreation) {
		Board board(3);
		EXPECT_FALSE(board.isGameOver());
	}

	TEST(Board, EmptyBoardCreation4x4) {
		Board board(4);
		EXPECT_FALSE(board.isGameOver());
	}

	TEST(Board, WithWinningColumn1) {
		Board board = setBoardMarks({
			X, O, O,
			X, _, _,
			X, _, O });
		EXPECT_TRUE(board.isWin());
	}

	TEST(Board, WithWinningColumn2) {
		Board board = setBoardMarks({
			O, X, O,
			O, X, _,
			_, X, X });
		EXPECT_TRUE(board.isWin());
	}

	TEST(Board, WithWinningColumn3) {
		Board board = setBoardMarks({
			O, X, X,
			O, O, X,
			_, _, X });
		EXPECT_TRUE(board.isWin());
	}

	TEST(Board, WithWinningRow1) {
		Board board = setBoardMarks({
			X, X, X,
			O, _, _,
			_, O, O });
		EXPECT_TRUE(board.isWin());
	}

	TEST(Board, WithWinningRow2) {
		Board board = setBoardMarks({
			O, _, _,
			X, X, X,
			_, O, O });
		EXPECT_TRUE(board.isWin());
	}

	TEST(Board, WithWinningRow3) {
		Board board = setBoardMarks({
			X, O, O,
			O, _, _,
			X, X, X });
		EXPECT_TRUE(board.isWin());
	}

	TEST(Board, WithWinningDiagonal1) {
		Board board = setBoardMarks({
			O, X, X,
			_, X, O,
			X, _, O});
		EXPECT_TRUE(board.isWin());
	}

	TEST(Board, WithWinningDiagonal2) {
		Board board = setBoardMarks({
			O, X, X,
			_, O, X,
			X, _, O});
		EXPECT_TRUE(board.isWin());
	}

	TEST(Board, EndingInDraw) {
		Board board = setBoardMarks({
			X, X, O,
			O, O, X,
			X, O, X });
		EXPECT_TRUE(board.isDraw());
	}

	TEST(Board, WithWin4x4) {
		Board board = setBoardMarks({
			X, X, X, X,
			O, O, X, _,
			O, O, X, O,
			O, X, _, _ });
		EXPECT_TRUE(board.isWin());
	}

	TEST(Board, WithDraw4x4) {
		Board board = setBoardMarks({ 
			X, X, X, O,
			O, O, X, X,
			O, O, X, O,
			O, X, O, X });
		EXPECT_TRUE(board.isDraw());
	}

}  // namespace training
