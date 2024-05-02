#include "Board.h"

Board:: Board(){
    // Initializer. The goal is to create an object that contains a data structure 
    // that can fit 9 pieces (X's or O's). And attributes that specify whose turn it is
    // and the turn number 
    char board[3][3] = { { ' ', ' ', ' ' }, 
						 { ' ', ' ', ' ' }, 
						 { ' ', ' ', ' ' } }; 

    char currentPlayer[1] = "X";
    int row, col;
    int turn;
} 

bool checkWin(char board[3][3], char player){
    // Method to check if win conditions are satisfied
    char inPlay[3][3] = board;
    return false;
}

int count_x(char board){
    // Method to count the number of X's on the board 
    // Useful for state validation 
    char inPlay[3][3] = board;
    return 0;
}

int count_o(char board){
    // Method to count the number of O's in play
    char inPlay[3][3] = board;
    return 0;
}

int count_e(char board){
    // Method to count the number of empty spaces available
    char inPlay[3][3] = board;
    return 0;
}

char add_move(char board){
    // Method to place a piece on the board
    char inPlay[3][3] = Board;
    return inPlay;
}

char update_move(char board){
    // Method to inject a custom board config 
    // good for validation
    char inPlay[3][3] = board;
    return inPlay;
}
