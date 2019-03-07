#include "HumanPlayer.hpp"

namespace training {
HumanPlayer::HumanPlayer(const Mark mark, UI &UI)
    : Player(mark), m_UI(UI) {
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