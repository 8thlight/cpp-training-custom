#include "HumanPlayer.hpp"

namespace training {
	HumanPlayer::HumanPlayer(const Mark m_Mark, UI & m_UI)
		: Player(m_Mark), m_UI(m_UI) {
	}

	int HumanPlayer::getMove(const Board &board) {
		int tileChoice = m_UI.getValidMove(board);
		while (board.tileOccupied(tileChoice)) {
			m_UI.announceInvalidInput();
			tileChoice = m_UI.getValidMove(board);
		}
		return tileChoice;
	}
}