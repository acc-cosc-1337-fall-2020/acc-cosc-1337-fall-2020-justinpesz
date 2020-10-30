#include "tic_tac_toe.h"

using std::vector;
using std::string;

bool TicTacToe::game_over()
{
    if(check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_board_full() == true)
    {
        winner = "Tie!";
        return true;
    }
    return false;
}

bool TicTacToe::check_board_full()const
{
    for(auto peg1: pegs1)
    {
        if(peg1 == " ")
        {
            return false;
        }    
    }
    return true;
}

bool TicTacToe::check_column_win()
{
    for(std::size_t i=0; i < 3; ++i)
    {
        if(pegs1[i] == "X" && pegs1[i+3] == "X" && pegs1[i+6] == "X")
        {
            return true;
        }
        else if(pegs1[i] == "O" && pegs1[i+3] == "O" && pegs1[i+6] == "O")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    for(std::size_t i=0; i < 7; i+=3)
    {
        if(pegs1[i] == "X" && pegs1[i+1] == "X" && pegs1[i+2] == "X")
        {
            return true;
        }
        else if(pegs1[i] == "O" && pegs1[i+1] == "O" && pegs1[i+2] == "O")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if(pegs1[0] == "X" && pegs1[4] == "X" && pegs1[8] == "X")
    {
        return true;
    } 
    else if(pegs1[2] == "X" && pegs1[4] == "X" && pegs1[6] == "X")
    {
        return true;
    }
    else if(pegs1[0] == "O" && pegs1[4] == "O" && pegs1[8] == "O")
    {
        return true;
    }
    else if(pegs1[6] == "O" && pegs1[4] == "O" && pegs1[2] == "O")
    {
        return true;
    }
    return false;
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    if(pegs1[position-1] == "X" || pegs1[position-1] == "O")
    {
        std::cout<<"Position played already!\n";
    }
    else if(pegs1[position-1] != "X" || pegs1[position-1] != "O")        
    {
        pegs1[position-1] = player;
        set_next_player();
    }   
}

void TicTacToe::display_board()const
{
    for(std::size_t i=0; i < pegs.size(); i += 3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
    std::cout<<"\n";
    for(std::size_t i=0; i < pegs1.size(); i += 3)
    {
        std::cout<<pegs1[i]<<"|"<<pegs1[i+1]<<"|"<<pegs1[i+2]<<"\n";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

void TicTacToe::clear_board()
{
    for(std::size_t i=0; i < pegs.size(); ++i)
    {
        pegs1[i] = " ";
    }
    
    pegs[0] = "1";
    pegs[1] = "2";
    pegs[2] = "3";
    pegs[3] = "4";
    pegs[4] = "5";
    pegs[5] = "6";
    pegs[6] = "7";
    pegs[7] = "8";
    pegs[8] = "9";
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }   
}
