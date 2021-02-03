#include <stdio.h>
#include <stdlib.h>

// Defined functions
void display_board(void);
int checkForWin(void);
void mark_board(int a);

int player = 1;
int choice = 0;
int status = 0;

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
       printf("Please choose a number between 1 and 9: ");
       scanf("%d", &choice);
     }
      
     // Marks the players choice onto the Tic-Tac-Toe board
     mark_board(int choice);

     // Determines if the player won, lost, draw or in progress still
     status = checkForWin(); 
  }while (status == 0);
  
  printf("\n=====> Player %d is the winner!!!\n\nPlayer %d, you suck at this game...", player, player = (player == 2) ? 1 : 2);
  return 0;
}
