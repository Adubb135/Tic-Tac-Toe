#include <stdio.h>
#include <stdlib.h>

// Declared functions
void display_board(void);
int checkForWin(void);
void mark_board(int a);

int player = 2;
int choice = 0;
int status = 0;

// Implemented char array for other functions to grab from it
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int main(void)
{
  do{
     // Displays Tic-Tac-Toe board
     display_board();
     
     // Prompts player to input a number
     printf("\nPlayer %d, mark a box please: ", player = (player == 2) ? 1 : 2);
     scanf("%d", &choice);

     // If user chooses a number outside of the bounds, prompt her/him to choose a valid number
     while (choice >= 10 && choice <= 0)
     {
       printf("Invalid choice. Please choose a number between 1 and 9: ");
       scanf("%d", &choice);
     }
      
     // Marks the players choice onto the Tic-Tac-Toe board
     mark_board(choice);

     // Determines if the player won, lost, draw or in progress still
     status = checkForWin(); 
  }while (status == 0);
  
 // Write an if-else-if statement to determine whether or not players tied or one of them won.
 if (status == 1)
  printf("\n=====> Player %d is the winner!!!\n\nPlayer %d, you suck at this game...", player, player = (player == 2) ? 1 : 2);
 else
  printf("\nIt's a Tie!!!\n");
 
 return 0;
}

void display_board()
{
	// Using this function to refresh the screen
	system("clear");

	printf("Player 1 - [X] AND Player 2 - [O] \n");

	printf("\t    |    |    \n");
	printf("\t  %c", board[0][0]);
	printf(" |  %c", board[0][1]);
	printf(" |  %c\n", board[0][2]);
	printf("\t ____________ \n");


	printf("\t    |    |    \n");
	printf("\t  %c", board[1][0]);
	printf(" |  %c", board[1][1]);
	printf(" |  %c\n", board[1][2]);
	printf("\t ____________ \n");


	printf("\t    |    |    \n");
	printf("\t  %c", board[2][0]);
	printf(" |  %c", board[2][1]);
	printf(" |  %c\n", board[2][2]);
}

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
 // If nothing checks out from above, x will remain 0
  else
    x = 0;
 
   // Returning the status of the game
  return x;
}

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
        printf("This block is occupied, you lost your turn! No mercy!!!\n\n");
        break;
      }
      else
      {
        board[0][0] = XorO;
        break;
      }
      
    case '2':
      if (mark != board[0][1])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!\n\n");
        break;
      }
      else
      {
        board[0][1] = XorO;
        break;
      }
      
    case '3':
      if (mark != board[0][2])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!\n\n");
        break;
      }
      else
      {
        board[0][2] = XorO;
        break;
      }
      
    case '4':
      if (mark != board[1][0])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!\n\n");
        break;
      }
      else
      {
        board[1][0] = XorO;
        break;
      }
      
    case '5':
      if (mark != board[1][1])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!\n\n");
        break;
      }
      else
      {
        board[1][1] = XorO;
        break;
      }
      
    case '6':
      if (mark != board[1][2])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!\n\n");
        break;
      }
      else
      {
        board[1][2] = XorO;
        break;
      }
      
    case '7':
      if (mark != board[2][0])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!\n\n");
        break;
      }
      else
      {
        board[2][0] = XorO;
        break;
      }
      
    case '8':
      if (mark != board[2][1])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!\n\n");
        break;
      }
      else
      {
        board[2][1] = XorO;
        break;
      }
      
    case '9':
      if (mark != board[2][2])
      {
        printf("This block is occupied, you lost your turn! No mercy!!!\n\n");
        break;
      }
      else
      {
        board[2][2] = XorO;
        break;
      }
  }  
}
