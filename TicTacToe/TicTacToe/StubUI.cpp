#include "StubUI.hpp"

namespace training {
StubUI::StubUI(vector <string> mockInputs) : m_MockInputs(mockInputs) {
    m_InputCounter = 0;
    m_WinAnnounced = false;
    m_DrawAnnounced = false;
}

int StubUI::getValidMove(const Board &) {
    m_InputCounter++;
    return stoi(m_MockInputs[m_InputCounter - 1]);
}

void StubUI::welcome() {}

void StubUI::displayMove(const Board &) {}

void StubUI::announceWinner(const Mark) {
    m_WinAnnounced = true;
}

void StubUI::announceDraw() {
    m_DrawAnnounced = true;
}

void StubUI::announceInvalidInput() {}

int StubUI::getValidMode() {
    m_InputCounter++;
    return stoi(m_MockInputs[m_InputCounter - 1]);
}

bool StubUI::wasWinAnnounced() {
    return m_WinAnnounced;
}

bool StubUI::wasDrawAnnounced() {
    return m_DrawAnnounced;
}
}