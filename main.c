#include <stdio.h>
#include <stdlib.h>

// Defined functions
void display_board(void);
int checkForWin(void);

int player = 1;
int choice = 0;

int main(void)
{
  do{
   display_board();
   printf("\nPlayer %d, mark a box please: ", player = (player == 2) ? 1 : 2);
   scanf("%d", &choice);
   
   
       
   status = checkForWin(); 
  }while (status == 0);
  
  
  return 0;
}
