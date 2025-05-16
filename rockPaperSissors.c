#include <stdio.h>

int gamesSelected;
int playerScore;
int computerScore;


int gameTracker(int games) {
	int toWin = games / 2 + 1;
	if (playerScore == toWin) {
		printf("You Win!");
	} else if (computerScore == toWin) {
		printf("You Lose!");
}
}

int main() {
	printf("Welcome to Rock, Paper, Sissors. To start, enter in the amount of games to be played.\n>");
	scanf("%d", &gamesSelected);
	gameTracker(gamesSelected);
	return 0;
}
