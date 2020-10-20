#include "tic_tac_toe.h"
#include<iostream>
#include<string>

using std::cout;
using std::cin;

int main() 
{
	TicTacToe tic_tac_toe;
	std::string player;

	cout<<"Enter X or O: ";
	cin>>player;

	tic_tac_toe.start_game(player);

	do
	{
		int position;
		cout<<"Enter position 1 to 9: ";
		cin>>position;
		tic_tac_toe.mark_board(position);
		tic_tac_toe.display_board();

	}while(tic_tac_toe.game_over() == false);

	cout<<"Game Over";

	return 0;	
}