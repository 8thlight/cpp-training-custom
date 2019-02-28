#include "RandomPlayer.hpp"

namespace training {
	RandomPlayer::RandomPlayer(const Mark m_Mark) : Player(m_Mark) {
	}

	int RandomPlayer::getMove(const Board & board) {
		int tileChoice = generateRandInRange();
		while (board.tileOccupied(tileChoice)) {
			tileChoice = generateRandInRange();
		}
		return tileChoice;
	}

	int RandomPlayer::generateRandInRange() {
		return rand() % 9 + 1;
	}
}