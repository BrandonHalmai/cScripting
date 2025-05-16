#include <stdio.h>
char operation;
char confirmation;


int addition() {
	printf("\nTesting out the addition function");
}


int main() {
	printf("\nWelcome to the calculator program. Please select the operation you wish to use. [+,-,x,/]\n>");
	while(1) {
		scanf("%c", &operation);
		switch(operation) {
			case '+':
				addition();
				break;
			case '-':
				printf("Subtract");
			default:
				printf("Invalid command. Please try again.");
		}
}
return 0;
}
