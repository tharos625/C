/* Craps */
/* Como Programar en C/C++ Segunda Edición, pag. 166 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define txtRED "\e[0;31m"
#define txtGREEN "\e[0;32m"
#define txtRESET "\e[0m"


int rollDice(void);

int main()
{
	int gameStatus, sum, myPoint;
	
	srand(time(NULL));
	sum = rollDice();
	
	switch(sum) {
		case 7: case 11:
			gameStatus = 1;
			break;
		case 2: case 3: case 12:
			gameStatus = 2;
			break;
		default:
			gameStatus = 0;
			myPoint = sum;
			printf("Point is %d\n", myPoint);
			break;
	}
	
	while (gameStatus == 0) {
		sum = rollDice();
		
		sleep(1);
		
		if (sum == myPoint)
			gameStatus = 1;
		else
			if (sum == 7)
				gameStatus = 2;
	}
	if (gameStatus == 1)
		printf(txtGREEN "Player wins\n" txtRESET);
	else
		printf(txtRED "Player loses\n" txtRESET);
	return 0;
}

int rollDice(void)
{
	int die1, die2, workSum;
	die1 = 1 + (rand() %6);
	die2 = 1 + (rand() %6);
	workSum = die1 + die2;
	printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
	return workSum;
}
