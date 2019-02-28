#pragma once

#include "Mark.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include "UI.hpp"
#include "CommandLineUI.hpp"

namespace training {
	class HumanPlayer : public Player {
	public:
		explicit HumanPlayer(Mark m_Mark, UI & m_UI);

		int getMove(const Board & board) override;

	private:
		UI & m_UI;
	};
}