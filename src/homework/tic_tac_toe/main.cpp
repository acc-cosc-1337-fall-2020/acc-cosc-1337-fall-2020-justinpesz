#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
#include<memory>
#include<utility>

using std::cout;
using std::cin;

int main() 
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	TicTacToeData gamer;
	TicTacToeManager manager(gamer);

	std::string player = "";
	char yesNo;
	int numSquare = 0;

	do
	{
		while(player == "")
		{
			cout<<"Enter X or O: ";
			cin>>player;
		
			if(player == "x" || player == "X")
			{
				player = "X";
			}
			else if(player == "o" || player == "O")
			{
				player = "O";
			}
			else
			{
			  	cout<<"Invalid player!\n";
				player = "";
			}
		}

		while(numSquare == 0)
		{
			cout<<"Select 3x3 or 4x4 game (3 or 4): ";
			
			while (!(cin>>numSquare))
        	{
            	std::cout<<"Invalid Board!\n";
            	cin.clear();
            	cin.ignore(100, '\n');
            	std::cout<<"Select 3x3 or 4x4 game (3 or 4): ";
        	}

			if(numSquare == 3)
			{
				tic_tac_toe = std::make_unique<TicTacToe3>();
			}
			else if(numSquare == 4)
			{
				tic_tac_toe = std::make_unique<TicTacToe4>();
			}
			else
			{
				cout<<"Invalid selection!\n";
				numSquare = 0;
			}
			
		}
		tic_tac_toe->start_game(player);
		cout<<*tic_tac_toe;
		

		do
		{
			cin>>*tic_tac_toe;
			cout<<*tic_tac_toe;

			if(tic_tac_toe->game_over() == false) 
			{
				std::cout<<"\nPlayer is: "<<tic_tac_toe->get_player()<<"\n\n";
			}
	
		}while(tic_tac_toe->game_over() == false);
		
		cout<<"Game Over\n\n";
		cout<<"The winner of the game is: "<<tic_tac_toe->get_winner();
		
		if(tic_tac_toe->get_winner() == "T")
		{
			cout<<"ie!\n\n";
		}
		else
		{
			cout<<"\n\n";
		}

		player = "";

		int X = 0;
		int O = 0;
		int T = 0;

		manager.save_game(tic_tac_toe);
		manager.get_winner_total(X, O, T);
		
		cout<<"X wins: "<<X<<"\n";
		cout<<"O wins: "<<O<<"\n";
		cout<<"Ties: "<<T<<"\n\n";

		cout<<"Play again? (y/n) ";
		numSquare = 0;
		cin>>yesNo;
	
	}while(yesNo == 'Y' || yesNo == 'y');

	cout<<"\n";
	cout<<manager;
	
	return 0;	
}