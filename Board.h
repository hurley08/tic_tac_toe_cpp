# pragma once
class Board
{
public:
    Board();
    char takeMove(int row, int col, char player[1]);
    bool checkWin(char board);
    int count_x(char board);
    int count_o(char board);
    int count_e(char board);


private:
    char board[3][3];
    char currentPlayer[1];
    int turn = 0;
};