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
    for(auto peg: pegs)
    {
        if(peg == " ")
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
        if(pegs[i] == "X" && pegs[i+3] == "X" && pegs[i+6] == "X")
        {
            return true;
        }
        else if(pegs[i] == "O" && pegs[i+3] == "O" && pegs[i+6] == "O")
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
        if(pegs[i] == "X" && pegs[i+1] == "X" && pegs[i+2] == "X")
        {
            return true;
        }
        else if(pegs[i] == "O" && pegs[i+1] == "O" && pegs[i+2] == "O")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        return true;
    } 
    else if(pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
    {
        return true;
    }
    else if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;
    }
    else if(pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
    {
        return true;
    }
    return false;
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    //clear_board();
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

void TicTacToe::clear_board()
{
    for(std::size_t i=0; i < pegs.size(); ++i)
    {
        pegs[i] = " ";
    }
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

void TicTacToe::show_numbered_spaces()
{
    /*for(std::size_t i=0; i < 9; ++i)
    {
        pegs[i] = 1+i;
    }*/
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