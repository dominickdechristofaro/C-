/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        06/04/2019
** Title:       FBoard.cpp
** Description: A board game you play by moving x and o pieces with moveX and
                moveO.  The game will conintue to be unfinished until either the
                x-piece does not have a valid space to move, or the x-piece has
                reached row 7 of the gameboard. The x-piece may move diagonially
                in any direction and the o-pieces may move diagionally but only
                if their row does not decrease (they only move up the gameboard).
******************************************************************************/
#include <iostream>
#include "FBoard.hpp"

// Default Constructor:  Initializes the game board to blank spaces '_' then places
// the x-piece at (0,3).  Places o-pieces at (7,0), (7,2), (7,4), (7,6).  Sets the 
// gameState to UNFINISHED.
FBoard::FBoard()
{
    // Set the game board to empty spaces '_'.
    for (row = 0; row <= 7; row++)
    {
        for (column = 0; column <= 7; column++)
        {
            board[row][column] = '_';
        }
    }
    // Set the o-pieces on the board.
    for (column = 0; column <=7; column += 2)
    {
        board[7][column] = 'O';
    }
    // Set the x-pieces and remaining data members.
    board[0][3] = 'X';
    xRowCurrent = 0;
    xColumnCurrent = 3;
    xRowMove = 0;
    xColumnMove = 0;
    gameState = UNFINISHED;
}

// Getter gameState:  returns the data member gameState
status FBoard::getGameState()
{
    return gameState;
}

// Setter setGameState: 
// X_WON = x-piece is on row 7.
// O_WON = x-piece cannot move.
// UNFINISHED = x-piece still has moves available and is not in row 7.
void FBoard::setGameState()
{
    // X_WON Condition
    if(xRowCurrent == 7)
    {
        gameState = X_WON;
    }
    // UNFINISHED Condition
    else if( (board[xRowCurrent + 1][xColumnCurrent + 1] == '_') ||
             (board[xRowCurrent + 1][xColumnCurrent - 1] == '_') ||
             (board[xRowCurrent - 1][xColumnCurrent + 1] == '_') ||
             (board[xRowCurrent - 1][xColumnCurrent - 1] == '_')  )
    {
        gameState = UNFINISHED;
    }
    // O_WON Condition
    else
    {
        gameState = O_WON;
    }
}

// Setter xRowMove: sets the data member xRowMove
void FBoard::setXRowMove(int xRowMoveIn)
{
    xRowMove = xRowMoveIn;
}

// Setter xColumnMove: sets the data member xColumnMove
void FBoard::setXColumnMove(int xColumnMoveIn)
{
    xColumnMove = xColumnMoveIn;
}

// Setter xRowCurrent: sets the data member xRowCurrent
void FBoard::setXRowCurrent(int xRowCurrentIn)
{
    xRowCurrent = xRowCurrentIn;
}

// Setter xColumnCurrent: sets the data member xColumnCurrent
void FBoard::setXColumnCurrent(int xColumnCurrentIn)
{
    xColumnCurrent = xColumnCurrentIn;
}

// Method moveXCheck: Checks to see if the inputs to moveX a valid choice for a move.  If so return true.
// If it is not a valid move, or if the game is already won, return false.
bool FBoard::moveXCheck(int xRowMoveIn, int xColumnMoveIn)
{
    // Set the data members xRowMove & xColumnMove
    setXRowMove(xRowMoveIn);
    setXColumnMove(xColumnMoveIn);

    // Check that the proposed move for x-piece is a space on the board
    if(xRowMove >= 0 && xRowMove <= 7 && xColumnMove >= 0 && xColumnMove <= 7)
    {
        // Set gameState and proceed only if gameState is set to UNFINISHED
        setGameState();
        if(gameState == UNFINISHED)
        {
            // Check if the proposed space for the x-piece to move to is '_'
            if( ((xRowCurrent + 1) == xRowMove && (xColumnCurrent + 1) == xColumnMove && board[xRowMove][xColumnMove] == '_') || 
                ((xRowCurrent + 1) == xRowMove && (xColumnCurrent - 1) == xColumnMove && board[xRowMove][xColumnMove] == '_') ||
                ((xRowCurrent - 1) == xRowMove && (xColumnCurrent + 1) == xColumnMove && board[xRowMove][xColumnMove] == '_') ||
                ((xRowCurrent - 1) == xRowMove && (xColumnCurrent - 1) == xColumnMove && board[xRowMove][xColumnMove] == '_')  )
            {
                // Set gameState and return a valid move (true)
                setGameState();
                return true;
            }
            else
            {
                
                setGameState();
                return false;
            }  
        }
        else
        {
            setGameState();
            return false;
        }
    }
    else
    {
        setGameState();
        return false;
    }   
}

// Method moveX: If the inputs are a valid move, move the x-piece to the requested location and return true.
// If the inputs are not a valid move, or if the game has already been won, return false.
bool FBoard::moveX(int xRowMoveIn, int xColumnMoveIn)
{
    // Checks if the proposed space was a valid move, proceed if moveXCheck returns true
    if(moveXCheck(xRowMoveIn, xColumnMoveIn) == true)
    {
        // Moves the x-piece on the gameboard, updates gameState, and returns true
        board[xRowCurrent][xColumnCurrent] = '_';
        xRowCurrent = xRowMove;
        xColumnCurrent = xColumnMove;
        board[xRowCurrent][xColumnCurrent] = 'X';
        setGameState();
        return true;
    }
    else
    {
        return false;
    }
} 

// Method moveO:  The first 2 arguments take in a current space (row,column) that an o-piece is at.
// If an o-piece is at that location, and the last 2 arguments is a valid space then return true and move the o-piece.
// If it is not a valid move or if the game has already been won, return false.
bool FBoard::moveO(int oRowCurrentIn, int oColumnCurrentIn, int oRowMoveIn, int oColumnMoveIn)
{
    // Check that the inputs are within the array range
    if(oRowCurrentIn >= 0 && oRowCurrentIn <= 7 && oColumnCurrentIn >= 0 && oColumnCurrentIn <= 7 && oRowMoveIn >= 0 && oRowMoveIn <= 7 && oColumnMoveIn >= 0 && oColumnMoveIn <= 7)
    {
        // Check that the dataMember gameState is set to UNFINISHED
        setGameState();
        if(gameState == UNFINISHED)
        {
            // Check that the first 2 arguments reference the location of a o-piece on the board
            if(board[oRowCurrentIn][oColumnCurrentIn] == 'O')
            {
                // Check that the last 2 arguments reference a valid move
                if((oRowCurrentIn - 1) == oRowMoveIn && ((oColumnCurrentIn - 1) == oColumnMoveIn || (oColumnCurrentIn + 1) == oColumnMoveIn) && board[oRowMoveIn][oColumnMoveIn] == '_')
                {
                    // Move the o-piece and update gameState
                    board[oRowCurrentIn][oColumnCurrentIn] = '_';
                    board[oRowMoveIn][oColumnMoveIn] = 'O';
                    setGameState();
                    return true;
                }
                else
                {
                    setGameState();
                    return false;
                }
            }
            else
            {
                setGameState();
                return false;
            }
        }
        else
        {
            setGameState();
            return false;
        }
    }
    else
    {
        setGameState();
        return false;
    }
}

// Print out the current state of the board including the game state.
void FBoard::printBoardState()
{
    // Printing out the board with row and column labels
    std::cout << "  ";
    for (column = 0; column <= 7; column++)
    {
        std::cout << column << " ";
    }
    std::cout << std::endl;
    for (row = 0; row <= 7; row++)
    {
        std::cout << row;
        for (column = 0; column <= 7; column++)
        {
            std::cout << "|";
            std::cout << board[row][column];
        }
        std::cout <<"|";
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // Printing out the current status of the game
    std::cout << "The status of the game is: ";
    if (gameState == X_WON)
    {
        std::cout << "X_WON" << std::endl;
    }
    else if (gameState == O_WON)
    {
        std::cout << "O_WON" << std::endl;
    }
    else if (gameState == UNFINISHED)
    {
        std::cout << "UNFINISHED" << std::endl;
    }
}