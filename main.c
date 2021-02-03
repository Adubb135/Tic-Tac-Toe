#include <stdio.h>
#include <stdlib.h>

// Declared functions
void display_board(void);
int checkForWin(void);
void mark_board(int a);

int player = 1;
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
     mark_board(int choice);

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
