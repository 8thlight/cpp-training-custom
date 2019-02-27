#include "TicTacToe.hpp"

namespace training {
	TicTacToe::TicTacToe(UI &ui, int m_Dimension) : ui(ui), m_Dimension(m_Dimension) {}

	void TicTacToe::start() {
		int mode = ui.getValidMode();
		array<unique_ptr<Player>, 2> players = makePlayers(mode);
		Game game(*players[0], *players[1], ui, m_Dimension);
		game.play();
	}

	std::array<unique_ptr<Player>, 2> TicTacToe::makePlayers(const int mode) {
		std::array<unique_ptr<Player>, 2> players{};
		switch (mode - 1) {
		case hvh:
			players[0] = make_unique<HumanPlayer>(X, ui);
			players[1] = make_unique<HumanPlayer>(O, ui);
			break;
		case hvc:
			players[0] = make_unique<HumanPlayer>(X, ui);
			players[1] = make_unique<RandomPlayer>(O);
			break;
		case cvh:
			players[0] = make_unique<RandomPlayer>(X);
			players[1] = make_unique<HumanPlayer>(O, ui);
			break;
		case cvc:
			players[0] = make_unique<RandomPlayer>(X);
			players[1] = make_unique<RandomPlayer>(O);
			break;
		default:
			break;
		}
		return players;
	}
}