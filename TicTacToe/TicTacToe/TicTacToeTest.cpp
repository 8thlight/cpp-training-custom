#include <gtest/gtest.h>
#include "TicTacToe.cpp"
#include "StubUI.hpp"
#include "RandomPlayer.cpp"

namespace training {
	TEST(TicTacToe, hvhGameP1Wins) {
		StubUI uistub({ "1","1","4","2","5","3" });
		TicTacToe ttt(uistub, 3);

		ttt.start();

		EXPECT_TRUE(uistub.wasWinAnnounced());
	}

	TEST(TicTacToe, cvcGame) {
		StubUI uistub({"4"});
		TicTacToe ttt(uistub, 3);

		ttt.start();

		EXPECT_TRUE(uistub.wasWinAnnounced()  || uistub.wasDrawAnnounced());
	}
}