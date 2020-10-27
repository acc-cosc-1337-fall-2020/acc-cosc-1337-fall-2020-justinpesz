//cpp
#include "tic_tac_toe.h"
//#include<vector>
//#include<string>
#include<iostream>

using std::vector;
using std::string;


bool TicTacToe::game_over()
{
    while (winner != "X" || winner != "O")
    {
        if(check_column_win() == true)
        {
            return true;
        }
        else if(check_row_win() == true)
        {
            return true;
        }
        else if(check_diagonal_win() == true)
        {
            return true;
        }
        else if(check_board_full() == true)
        {
            winner = "Tie!";
            return true;
        }
        else
        {
            return false;
        }
        
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
    do
    {
        if(pegs[position-1] == " ")
        {
            pegs[position-1] = player;
            set_next_player();
        }
        else
        {
            std::cout<<"Position played already!\n";
        }
        
    }while(pegs[position-1] == " ");
    

}

void TicTacToe::display_board()const
{
    for(std::size_t i=0; i < pegs.size(); i += 3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
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

bool TicTacToe::check_board_full()const
{
    for(auto peg: pegs)
    {
        if(peg == " ")
        {
            return false;
        }    
    }
    
    return true;

}

void TicTacToe::clear_board()
{
    for(std::size_t i=0; i < pegs.size(); ++i)
    {
        pegs[i] = " ";
    }
}

bool TicTacToe::check_column_win()
{
    if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
    {
        set_winner();
        return true;
    }
    else if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
    {
        set_winner();
        return true;
    }
    else if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
    {
        set_winner();
        return true;
    }
    else if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    {
        set_winner();
        return true;
    }
    else if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    {
        set_winner();
        return true;
    }
    else if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
    {
        set_winner();
        return true;
    }
    
    return false;

}

bool TicTacToe::check_row_win()
{
    if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
    {
        set_winner();
        return true;
    }
    else if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
    {
        set_winner();
        return true;
    }
    else if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
    {
        set_winner();
        return true;
    }
    else if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    {
        set_winner();
        return true;
    }
    else if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    {
        set_winner();
        return true;
    }
    else if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    {
        set_winner();
        return true;
    }

    return false;

}

bool TicTacToe::check_diagonal_win()
{
    if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        set_winner();
        return true;
    } 
    else if(pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X")
    {
        set_winner();
        return true;
    }
    else if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        set_winner();
        return true;
    }
    else if(pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
    {
        set_winner();
        return true;
    }
    
    return false;

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

std::string TicTacToe::get_player()
{
    return player;
}

std::string TicTacToe::get_winner()
{
    return winner;
}