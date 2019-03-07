// Copyright 2019 < 8th Light >

#include <gtest/gtest.h>
#include "HumanPlayer.hpp"
#include "StubUI.hpp"
#include "Board.hpp"
#include "Mark.hpp"

namespace training {
	TEST(HumanPlayer, inputTileOccupiedValidation) {
		StubUI stubUI({ "1", "2" });
		HumanPlayer player = HumanPlayer(X, stubUI);
		Board board(3);
		board.setMark(1, X);

		EXPECT_TRUE(player.getMove(board) == 2);
	}
}  // namespace training
