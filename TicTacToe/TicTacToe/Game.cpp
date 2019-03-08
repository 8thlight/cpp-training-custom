// Copyright 2019 < 8th Light >

#include "Game.hpp"

namespace training {
    Game::Game(Player & const playerOne, Player & const playerTwo, UI & const UI, int const dimension)
        : m_PlayerOne(playerOne),
        m_PlayerTwo(playerTwo),
        m_UI(UI),
        m_Board(Board(dimension)) {}

    void Game::play() {
        Player *activePlayer = &m_PlayerOne;
        m_UI.welcome();
        playAllTurns(activePlayer);
    }

    bool Game::isGameOver() {
        return m_Board.isGameOver();
    }

    void Game::playAllTurns(Player *activePlayer) {
        playTurn(activePlayer);
        if (isGameOver()) {
            announceResult(activePlayer);
        } else {
            Player *nextPlayer = alternate(activePlayer);
            playAllTurns(nextPlayer);
        }
    }

    void Game::playTurn(Player *activePlayer) {
        int move = activePlayer->getMove(m_Board);
        m_Board.setMark(move, activePlayer->getMark());
        m_UI.displayMove(m_Board);
    }

    Player *Game::alternate(Player *activePlayer) {
        return (activePlayer == &m_PlayerOne) ? &m_PlayerTwo : &m_PlayerOne;
    }

    void Game::announceResult(Player *activePlayer) {
        (m_Board.isWin()) ? m_UI.announceWinner(activePlayer->getMark())
            : m_UI.announceDraw();
    }
}  // namespace training
