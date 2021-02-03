#include <stdio.h>
#include <stdlib.h>

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
