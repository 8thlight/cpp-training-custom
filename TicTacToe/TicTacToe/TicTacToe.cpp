// Copyright 2019 < 8th Light >

#include <memory>
#include "TicTacToe.hpp"

namespace training {
    TicTacToe::TicTacToe(UI &UI, int dimension)
        : m_UI(UI), m_Dimension(dimension) {}

    void TicTacToe::start() {
        int mode = m_UI.getValidMode();
        array<unique_ptr<Player>, 2> players = makePlayers(mode);
        Game game(*players[0], *players[1], &m_UI, m_Dimension);
        game.play();
    }

    array<unique_ptr<Player>, 2> TicTacToe::makePlayers(const int mode) {
        array<unique_ptr<Player>, 2> players{};
        switch (mode - 1) {
        case hvh:players[0] = make_unique<HumanPlayer>(X, &m_UI);
            players[1] = make_unique<HumanPlayer>(O, &m_UI);
            break;
        case hvc:players[0] = make_unique<HumanPlayer>(X, &m_UI);
            players[1] = make_unique<RandomPlayer>(O);
            break;
        case cvh:players[0] = make_unique<RandomPlayer>(X);
            players[1] = make_unique<HumanPlayer>(O, &m_UI);
            break;
        case cvc:players[0] = make_unique<RandomPlayer>(X);
            players[1] = make_unique<RandomPlayer>(O);
            break;
        default:break;
        }
        return players;
    }
}  // namespace training
