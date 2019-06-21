/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        06/04/2019
** Title:       FBoard.hpp
** Description: A board game you play by moving x and o pieces with moveX and
                moveO.  The game will conintue to be unfinished until either the
                x-piece does not have a valid space to move, or the x-piece has
                reached row 7 of the gameboard. The x-piece may move diagonially
                in any direction and the o-pieces may move diagionally but only
                if their row does not decrease (they only move up the gameboard).
******************************************************************************/
#ifndef FBOARD_HPP
#define FBOARD_HPP
enum status {X_WON, O_WON, UNFINISHED};

class FBoard
{
/*************************** PRIVATE ATTRIBUTES ******************************/
private: 
    int row,                                        // used to initialize the board row
        column,                                     // used to initialize the board column
        xRowCurrent,                                // current row position of the x-piece
        xRowMove,                                   // proposed row position to move the x-piece
        xColumnCurrent,                             // current column position of the x-piece
        xColumnMove;                                // proposed column position to move the x-piece
    status gameState;                               // holds the status of the game (X_WON, O_WON, UNFINISHED)
    char board [8][8];                              // 2D array to hold the pieces of the game

/*************************** PUBLIC ATTRIBUTES *******************************/
public:
// Default Constructors:
FBoard();                             // Set up the 'X' piece at (0,3)
                                      // Initializes xRow = 0 and xColumn = 3
                                      // Sets up the 'O' pieces at (7,0), (7,2), (7,4), (7,6)
                                      // Initlizes the gameboard and sets gameState to Unfinished

// Setters:
void setXRowCurrent(int);             // sets the data member xRowCurrent
void setXColumnCurrent(int);          // sets the data member xColumnCurrent
void setXRowMove(int);                // sets the data member xRowMove
void setXColumnMove(int);             // sets the data member xColumnMove
void setGameState();                  // sets the data member gameStateß

// Methods:
status getGameState();                // returns the data member gameState.

bool moveX(int, int);                 // takes the row and column the x-piece is moving too.  Returns true
                                      // if the inputs represent a valid move.  Returns false if the move is
                                      // invalid or if the game has already been won.

bool moveXCheck(int, int);            // helper function to see if the proposed x move is valid
                                      // returns true if the move is valid, returns false if it is not or the
                                      // game has already been won.

bool moveO(int, int, int, int);       // takes in the row and column of a current space on the board.  If the
                                      // char 'O' is at that space, it moves that character diagionally up the board
                                      // by the next 2 inputs (row, column).  The 'O' pieces may not move down the board.

// Print Values:
void printBoardState();               // Prints the status of the board and the gameStatus
};
#endif