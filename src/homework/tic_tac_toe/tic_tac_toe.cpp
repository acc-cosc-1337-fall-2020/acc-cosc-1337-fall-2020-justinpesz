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
        winner = "T";
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

bool TicTacToe::check_column_win() const
{
    return false;
}

bool TicTacToe::check_row_win() const
{
    return false;
}

bool TicTacToe::check_diagonal_win() const
{
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
        
        if(game_over() == false)
        {
            set_next_player();
        }
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
        winner = "X";
    }
    else
    {
        winner = "O";
    }   
}

std::istream& operator>>(std::istream& in, TicTacToe& b)
{
    if(b.pegs.size() == 9)
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
            position = 0;
        }
    }
    else if(b.pegs.size() == 16)
    {
        int position;
                
        std::cout<<"Enter position 1 to 16: ";
            
        while (!(in>>position))
        {
            std::cout<<"Invalid position!\n";
            in.clear();
            in.ignore(100, '\n');
            std::cout<<"Enter position 1 to 16: ";
        }
                
        if(position >= 1 && position <= 16)
        {
            b.mark_board(position);
        }
        else
        {
            std::cout<<"Invalid position!\n";
            position = 0;
        }
    }
    return in;   
}


std::ostream& operator<<(std::ostream& out, const TicTacToe& b)
{
    if(b.pegs.size() == 9)
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
    }
    else if(b.pegs.size() == 16)    
    {
        out<<" "<<b.pegs2[0]<<"| "<<b.pegs2[1]<<"| "<<b.pegs2[2]<<"| "<<b.pegs2[3]<<"\n";
        out<<" "<<b.pegs2[4]<<"| "<<b.pegs2[5]<<"| "<<b.pegs2[6]<<"| "<<b.pegs2[7]<<"\n";
        out<<" "<<b.pegs2[8]<<"|"<<b.pegs2[9]<<"|"<<b.pegs2[10]<<"|"<<b.pegs2[11]<<"\n";
        out<<b.pegs2[12]<<"|"<<b.pegs2[13]<<"|"<<b.pegs2[14]<<"|"<<b.pegs2[15]<<"\n";

        out<<"\n";

        for(std::size_t n=0; n < b.pegs.size(); n += 4)
        {
            out<<b.pegs[n]<<"|"<<b.pegs[n+1]<<"|"<<b.pegs[n+2]<<"|"<<b.pegs[n+3]<<"\n";
        }
    }
    return out;
}