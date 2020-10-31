#include<vector>
#include<string>
#include<iostream>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    std::string get_player()const{return player;}
    std::string get_winner()const{return winner;}
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    void display_board()const;
        
private:
    std::string winner;
    std::string player;
    std::vector<int> pegs1{9, 0};
    std::vector<std::string> pegs{9, " "};
    bool check_board_full()const;
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_next_player();
    void set_winner();
    void clear_board();
};

#endif

