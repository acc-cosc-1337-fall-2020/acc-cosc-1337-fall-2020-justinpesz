//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

class TicTacToe3 : public TicTacToe
{
public:
    TicTacToe3() : TicTacToe(3){}
    TicTacToe3(std::vector<std::string> p, std::string winner) : TicTacToe(p, winner){}

private:
    virtual bool check_column_win() const override;
    virtual bool check_row_win() const override;
    virtual bool check_diagonal_win() const override;
};
#endif