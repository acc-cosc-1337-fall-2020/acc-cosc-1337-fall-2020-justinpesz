//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<string>
#include<iostream>

using std::string;
using std::vector;

void TicTacToeManager::save_game(const TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

std::ostream& operator<<(std::ostream& out, TicTacToeManager& manager)
{
    for(std::size_t i=0; i < manager.games.size(); ++i)
    {
        out<<manager.games[i];
        out<<"Game "<<i+1<<" winner: "<<manager.games[i].get_winner()<<"\n\n"; 
    }
    return out;
}

void TicTacToeManager::get_winner_total()
{
    std::cout<<"O wins: "<<O_win<<"\n";
    std::cout<<"X wins: "<<X_win<<"\n";
    std::cout<<"Ties: "<<Ties<<"\n\n";
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