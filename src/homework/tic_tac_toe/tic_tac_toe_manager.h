//h
#include<vector>
#include<string>
#include<iostream>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

using std::string;
using std::vector;

class TicTacToeManager : TicTacToe
{
public:
    void save_game(const TicTacToe b);
    friend std::ostream& operator<<(std::ostream& out, TicTacToeManager& manager);
    void get_winner_total();
    
private:
    vector<TicTacToe> games{0};
    int X_win{0};
    int O_win{0};
    int Ties{0};
    void update_winner_count(string winner);
};

#endif
