//h
#include<vector>
#include<string>
#include<iostream>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player()const;
    void display_board()const;
    std::string get_winner();

private:
    std::string winner;
    bool check_board_full()const;
    void set_next_player();
    std::string player;
    std::vector<std::string> pegs{9, " "};
    void clear_board();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
};

#endif

