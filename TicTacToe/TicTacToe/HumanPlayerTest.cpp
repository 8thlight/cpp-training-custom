#include <gtest/gtest.h>
#include "HumanPlayer.cpp"
#include "StubUI.hpp"
#include "Board.hpp"
#include "Mark.hpp"

namespace training {
	TEST(HumanPlayer, inputTileOccupiedValidation) {
		StubUI uistub({ "1", "2" });
		HumanPlayer player = HumanPlayer(X, uistub);
		Board board(3);
		board.setMark(1, X);

		EXPECT_TRUE(player.getMove(board) == 2);
	}
}