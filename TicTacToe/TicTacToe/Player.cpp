#include "Player.hpp"

namespace training {
	Player::Player(const Mark mark)
		: m_Mark(mark) {}

	Mark Player::getMark() const {
		return m_Mark;
	}
}