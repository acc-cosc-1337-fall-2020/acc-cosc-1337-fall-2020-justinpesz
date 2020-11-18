#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<memory>

//cpp
void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    std::ofstream file_out;
    file_out.open(file_name);

    for(auto& game : games)
    {
        for(auto& c : game->get_pegs())
        {
            file_out<<c;
        }
        file_out<<game->get_winner();
        file_out<<"\n"<<std::endl;
    }

    file_out.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    std::ifstream read_file;
    read_file.open(file_name);
    
    std::vector<std::unique_ptr<TicTacToe>> boards;
    std::string line;
    
    std::vector<std::string> pegs;
    
    while(std::getline(read_file, line))
    {
        for(auto& ch : line)
        {
            std::string string(1, ch);
            pegs.push_back(string);
        }
            
        std::string winner = pegs[pegs.size()-1];
        pegs.resize(pegs.size()-1);               
        
        //pegs{XOOXOXOXOO, XOXOXOXOXX, ...}

        //pegs{X, O, X, O, ...}

        std::unique_ptr<TicTacToe> tic_tac_toe;

        if(pegs.size() == 9)
        {
            tic_tac_toe = std::make_unique<TicTacToe3>(pegs, winner);
        }
        if(pegs.size() == 16)
        {
            tic_tac_toe = std::make_unique<TicTacToe4>(pegs, winner);
        }
        
        boards.push_back(std::move(tic_tac_toe));
    }
    
    read_file.close();

    return boards;
}