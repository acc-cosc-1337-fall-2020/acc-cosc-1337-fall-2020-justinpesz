#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout;
using std::cin;

int main() 
{
	TicTacToe tic_tac_toe;
	TicTacToeManager manager;

	std::string player = "";
	char yesNo;
	
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

		tic_tac_toe.start_game(player);
		cout<<tic_tac_toe;

		do
		{
			cin>>tic_tac_toe;
			cout<<tic_tac_toe;

			if(tic_tac_toe.game_over() == false) 
			{
				std::cout<<"\nPlayer is: "<<tic_tac_toe.get_player()<<"\n\n";
			}
	
		}while(tic_tac_toe.game_over() == false);

		cout<<"Game Over\n\n";
		cout<<"The winner of the game is: "<<tic_tac_toe.get_winner()<<"\n\n";
		player = "";

		manager.save_game(tic_tac_toe);
		manager.get_winner_total();

		cout<<"Play again? (y/n) ";
		cin>>yesNo;
	
	}while(yesNo == 'Y' || yesNo == 'y');

	cout<<"\n";
	cout<<manager;
	
	return 0;	
}