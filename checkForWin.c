#include <stdio.h>
#include <stdlib.h>

/*******************************
FUNCTION TO RETURN GAME STATUS:
 1 : GAME IS OVER WITH RESULTS
 0 : GAME IS IN PROGRESS
-1 : GAME IS OVER WITH NO RESULTS
*******************************/

int checkForWin()
{
  int x = 0;
  void display_board();
  
  // Checking for all possible win conditions
  if ( board[0][0] == board[0][1] && board[0][1] == board[0][2] )
    x = 1;
  else if ( board[1][0] == board[1][1] && board[1][1] == board[1][2] )
    x = 1;
  else if ( board[2][0] == board[2][1] && board[2][1] == board[2][2] )
    x = 1;
  else if ( board[0][0] == board[1][0] && board[1][0] == board[2][0] )
    x = 1;
  else if ( board[0][1] == board[1][1] && board[1][1] == board[2][1] )
    x = 1;
  else if ( board[0][2] == board[1][2] && board[1][2] == board[2][2] )
    x = 1;
  else if ( board[0][0] == board[1][1] && board[1][1] == board[2][2] )
    x = 1;
  else if ( board[0][2] == board[1][1] && board[1][1] == board[2][0] )
    x = 1;
  // Checking for a possible draw outcome
  else if ( board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3'
           && board[1][0] != '4' && board[1][1] != '5' && board[1][2] != '6'
           && board[2][0] != '7' && board[2][1] != '8' && board[2][2] != '9' )
    x = -1;
  // Returning the status of the game
  return x;
}
