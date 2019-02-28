#include <gtest/gtest.h>
#include "TicTacToe.hpp"
#include "UIStub.hpp"

namespace training {
	TEST(TicTacToe, hvhGameP1Wins) {
		UIStub uistub({ "1","1","4","2","5","3" });
		TicTacToe ttt(uistub, 3);

		ttt.start();

		EXPECT_TRUE(uistub.wasWinAnnounced());
	}

	TEST(TicTacToe, cvcGame) {
		UIStub uistub({"4"});
		TicTacToe ttt(uistub, 3);

		ttt.start();

		EXPECT_TRUE(uistub.wasWinAnnounced()  || uistub.wasDrawAnnounced());
	}
}