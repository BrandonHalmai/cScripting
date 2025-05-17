#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gamesSelected;
int playerScore;
int computerScore;
char selection;

int gameTracker(int games) {
	int toWin = games / 2 + 1;
	if (playerScore == toWin) {
		printf("You Win!");
	} else if (computerScore == toWin) {
		printf("You Lose!");
}
}

int game(char user) {
	char computer;
	char selection[] = {'r', 'p', 's'};
	srand(time(NULL));
	int random_index = rand() % 3;
	computer = selection[random_index];

	if ((user == 'r' && computer == 's') || (user == 'p' && computer == 'r') || (user == 's' && computer == 'p')) {
		printf("\nYou won this round.\n");
		playerScore = playerScore + 1;
	} else {
		printf("\nYou lost this round.\n");
		computerScore = computerScore + 1;\
	}
}

int main() {
	printf("\nWelcome to Rock, Paper, Sissors. To start, enter in the amount of games to be played.\n>");
	scanf("%d", &gamesSelected);
	for (int i = 0; i < gamesSelected; i++) {
		printf("\n\nSelect rock (r), paper (p) or sissors (s).\n>");
		scanf(" %c", &selection);
		game(selection);
	}

	if (playerScore > computerScore) {
		printf("\nYou've won the entire game!\n");
	} else {
		printf("\nYou've lost the entire game.\n");
	}
	return 0;
}
