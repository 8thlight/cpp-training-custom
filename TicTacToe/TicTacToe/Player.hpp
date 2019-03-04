#pragma once

#include "Mark.hpp"

namespace training {
	class Board;

	struct Player {
		explicit Player(Mark mark);

		virtual int getMove(const Board & board) = 0;

		Mark getMark() const;

		virtual ~Player() = default;

	private:
		Mark m_Mark;
	};
}