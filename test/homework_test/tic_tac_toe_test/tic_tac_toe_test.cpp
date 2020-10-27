#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify game ends when the board is full")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == true);
	REQUIRE(tic_tac_toe.get_winner() == "Tie!");
}

TEST_CASE("get player function X")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.get_player() == "X");
}

TEST_CASE("get player function O")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");

	REQUIRE(tic_tac_toe.get_player() == "O");
}

TEST_CASE("check column 1 win function")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(1);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(4);
	tic_tac_toe.mark_board(3);
	tic_tac_toe.mark_board(7);
	
	REQUIRE(tic_tac_toe.game_over() == true);
	

}

TEST_CASE("check column 2 win function")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(3);
	tic_tac_toe.mark_board(5);
	tic_tac_toe.mark_board(6);
	tic_tac_toe.mark_board(8);
	
	REQUIRE(tic_tac_toe.game_over() == true);
	

}

TEST_CASE("check column 3 win function")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(3);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(6);
	tic_tac_toe.mark_board(4);
	tic_tac_toe.mark_board(9);
	
	REQUIRE(tic_tac_toe.game_over() == true);
	
}

TEST_CASE("check row 1 win function")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(1);
	tic_tac_toe.mark_board(4);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(5);
	tic_tac_toe.mark_board(3);
	
	REQUIRE(tic_tac_toe.game_over() == true);
	

}

TEST_CASE("check row 2 win function")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(4);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(5);
	tic_tac_toe.mark_board(3);
	tic_tac_toe.mark_board(6);
	
	REQUIRE(tic_tac_toe.game_over() == true);
	

}

TEST_CASE("check row 3 win function")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(7);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(8);
	tic_tac_toe.mark_board(3);
	tic_tac_toe.mark_board(9);
	
	REQUIRE(tic_tac_toe.game_over() == true);
	

}

TEST_CASE("check diagonal 1 win function")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(1);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(5);
	tic_tac_toe.mark_board(3);
	tic_tac_toe.mark_board(9);
	
	REQUIRE(tic_tac_toe.game_over() == true);
	

}

TEST_CASE("check diagonal 2 win function")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(3);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(5);
	tic_tac_toe.mark_board(4);
	tic_tac_toe.mark_board(7);
	
	REQUIRE(tic_tac_toe.game_over() == true);

}