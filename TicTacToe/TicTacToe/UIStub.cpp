#include "UIStub.hpp"

namespace training {
	UIStub::UIStub(vector<string> mockInputs) : m_MockInputs(mockInputs) {
		m_InputCounter = 0;
		m_WinAnnounced = false;
		m_DrawAnnounced = false;
	}

	int UIStub::getValidMove(const Board &) {
		m_InputCounter++;
		return stoi(m_MockInputs[m_InputCounter - 1]);
	}

	void UIStub::welcome() {}

	void UIStub::displayMove(const Board &) {}

	void UIStub::announceWinner(const Mark) {
		m_WinAnnounced = true;
	}

	void UIStub::announceDraw() {
		m_DrawAnnounced = true;
	}

	void UIStub::announceInvalidInput() {}

	int UIStub::getValidMode() {
		m_InputCounter++;
		return stoi(m_MockInputs[m_InputCounter - 1]);
	}

	bool UIStub::wasWinAnnounced() {
		return m_WinAnnounced;
	}

	bool UIStub::wasDrawAnnounced() {
		return m_DrawAnnounced;
	}
}