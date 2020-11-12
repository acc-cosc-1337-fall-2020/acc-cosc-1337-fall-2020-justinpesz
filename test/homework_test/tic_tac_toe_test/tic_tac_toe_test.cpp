#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify game 3x3 ends when the board is full")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "Tie!");
}

TEST_CASE("Verify game 4x4 ends when the board is full")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(10);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(11);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(12);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(13);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(14);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(15);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(16);
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "Tie!");
}

TEST_CASE("get 3x3 player function X")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->get_player() == "X");
}

TEST_CASE("get 3x3 player function O")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->get_player() == "O");
}

TEST_CASE("get 4x4 player function X")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->get_player() == "X");
}

TEST_CASE("get 4x4 player function O")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->get_player() == "O");
}
TEST_CASE("check 3x3 column 1 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 4x4 column 1 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(10);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(13);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 3x3 column 2 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 4x4 column 2 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(10);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(14);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 3x3 column 3 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 4x4 column 3 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(11);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(15);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 4x4 column 4 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(12);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(16);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 3x3 row 1 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 4x4 row 1 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 3x3 row 2 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 4x4 row 2 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 3x3 row 3 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 4x4 row 3 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(10);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(11);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(12);
	REQUIRE(tic_tac_toe->game_over() == true);
}
TEST_CASE("check 4x4 row 4 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(13);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(14);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(15);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(16);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 3x3 diagonal 1 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 4x4 diagonal 1 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(11);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(16);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 3x3 diagonal 2 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("check 4x4 diagonal 2 win function")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(10);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(13);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Verify X as winner")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	TicTacToeManager manager;
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == true);

	REQUIRE(tic_tac_toe->get_winner() == "X");
}

TEST_CASE("Verify O as winner")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	TicTacToeManager manager;
	tic_tac_toe->start_game("O");

	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == true);

	REQUIRE(tic_tac_toe->get_winner() == "O");
}

TEST_CASE("Verify 4x4 X as winner")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	TicTacToeManager manager;
	tic_tac_toe->start_game("X");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == true);

	REQUIRE(tic_tac_toe->get_winner() == "X");
}

TEST_CASE("Verify 4x4 O as winner")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	TicTacToeManager manager;
	tic_tac_toe->start_game("O");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == true);

	REQUIRE(tic_tac_toe->get_winner() == "O");
}