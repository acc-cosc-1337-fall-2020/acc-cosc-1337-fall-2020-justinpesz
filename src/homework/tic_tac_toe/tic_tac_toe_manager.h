//h
#include<vector>
#include<string>
#include<iostream>
#include<utility>
#include<memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

using std::string;
using std::vector;

class TicTacToeManager
{
public:
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData &data);
    ~TicTacToeManager();
    void save_game(std::unique_ptr<TicTacToe> &b);
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
    void get_winner_total(int& X, int& O, int& T);
    
private:
    vector<std::unique_ptr<TicTacToe>> games;
    int X_win{0};
    int O_win{0};
    int Ties{0};
    void update_winner_count(string winner);
    TicTacToeData data;
};

#endif
