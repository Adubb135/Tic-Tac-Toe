#include <stdio.h>
#include <stdlib.h>

void mark_board(int choice)
{
  char XorO;
  char mark;
  
  // Assignes each player an "X" or "O" depending whether the player is 1 or 2
  if (player == 1)
    XorO = 'X';
  else
    XorO = 'O';
  
  // Turns the number placed in choice and turns it into a char, if they pick a space that is already occupied, they lose a turn!
  mark = choice + '0';
  
  // Determines where to mark the board
  switch (mark)
  {
    case '1':
      if (mark != board[0][0])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!");
        break;
      }
      else
      {
        board[0][0] == XorO;
        break;
      }
      
    case '2':
      if (mark != board[0][1])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!");
        break;
      }
      else
      {
        board[0][1] == XorO;
        break;
      }
      
    case '3':
      if (mark != board[0][2])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!");
        break;
      }
      else
      {
        board[0][2] == XorO;
        break;
      }
      
    case '4':
      if (mark != board[1][0])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!");
        break;
      }
      else
      {
        board[1][0] == XorO;
        break;
      }
      
    case '5':
      if (mark != board[1][1])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!");
        break;
      }
      else
      {
        board[1][1] == XorO;
        break;
      }
      
    case '6':
      if (mark != board[1][2])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!");
        break;
      }
      else
      {
        board[1][2] == XorO;
        break;
      }
      
    case '7':
      if (mark != board[2][0])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!");
        break;
      }
      else
      {
        board[2][0] == XorO;
        break;
      }
      
    case '8':
      if (mark != board[2][1])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!");
        break;
      }
      else
      {
        board[2][1] == XorO;
        break;
      }
      
    case '9':
      if (mark != board[2][2])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!");
        break;
      }
      else
      {
        board[2][2] == XorO;
        break;
      }
  }  
}
