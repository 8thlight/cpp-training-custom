#pragma once
#include "UI.hpp"
#include "Player.hpp"
#include "HumanPlayer.hpp"
#include "Game.hpp"
#include "RandomPlayer.hpp"

namespace training {
	class TicTacToe {
	public:
		explicit TicTacToe(UI &ui, int m_Dimension);

		void start();

	private:
		UI ui;
		int m_Dimension;

		std::array<unique_ptr<Player>, 2> makePlayers(int mode);
	};
}