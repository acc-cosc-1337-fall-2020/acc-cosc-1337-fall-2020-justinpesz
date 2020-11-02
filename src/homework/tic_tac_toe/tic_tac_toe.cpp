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
    for(std::size_t i=0; i < 7; i += 3)
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
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    if(pegs[position-1] == "X" || pegs[position-1] == "O")
    {
        std::cout<<"Position played already!\n";
    }
    else if(pegs[position-1] != "X" || pegs[position-1] != "O")        
    {
        pegs[position-1] = player;
        set_next_player();
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
    
    for(std::size_t i=0; i < pegs1.size(); ++i)
    {
        pegs1[i] = i + 1;
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

std::istream& operator>>(std::istream& in, TicTacToe& b)
{
    int position;
			
	std::cout<<"Enter position 1 to 9: ";
		
	while (!(in>>position))
	{
		std::cout<<"Invalid position!\n";
		in.clear();
		in.ignore(100, '\n');
		std::cout<<"Enter position 1 to 9: ";
	}
			
	if(position >= 1 && position <= 9)
	{
		b.mark_board(position);
	}
	else
	{
		std::cout<<"Invalid position!\n";
	}
    return in;   
}


std::ostream& operator<<(std::ostream& out, TicTacToe& b)
{
    for(std::size_t i=0; i < b.pegs1.size(); i += 3)
    {
        out<<b.pegs1[i]<<"|"<<b.pegs1[i+1]<<"|"<<b.pegs1[i+2]<<"\n";
    }
  
    out<<"\n";

    for(std::size_t n=0; n < b.pegs.size(); n += 3)
    {
        out<<b.pegs[n]<<"|"<<b.pegs[n+1]<<"|"<<b.pegs[n+2]<<"\n";
    }
    return out;
}