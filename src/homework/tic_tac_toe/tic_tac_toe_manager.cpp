//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<string>
#include<iostream>

using std::string;
using std::vector;

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> &b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    int count = 1;
    for(auto& game : manager.games)
    {
        out<<"Game "<<count<<"\n";
        out<<*game;
        out<<"Game winner: "<<game->get_winner(); 
        
        if(game->get_winner() == "T")
        {
            out<<"ie!\n\n";
        }
        else
        {
            out<<"\n\n";
        }
        
        count += 1;
    }
    return out;
}

void TicTacToeManager::get_winner_total(int& X, int& O, int& T)
{
    X = X_win;
    O = O_win;
    T = Ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X")
    {
        X_win += 1;
    }
    else if(winner == "O")
    {
        O_win += 1;
    }
    else
    {
        Ties += 1;
    }
}

TicTacToeManager::TicTacToeManager(TicTacToeData &data)
{
    games = data.get_games();
    for(auto& game : games)
    {
        update_winner_count(game->get_winner());
    }
}

TicTacToeManager::~TicTacToeManager(){data.save_games(games);}