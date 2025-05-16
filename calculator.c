#include <stdio.h>
char operation;
char confirmation;


int addition() {
	printf("\nTesting out the addition function\n");
}

int subtraction() {
	printf("\nTesting out the substraction function\n");
}

int multiplication() {
	printf("\nTesting out the multiplication function\n");
}

int divison() {
	printf("\nTesting out the division function\n");
}

int operationSelector() {
	scanf(" %c", &operation);
		switch (operation) {
			case '+':
				addition();
				break;	
			case '-':
				subtraction();
				break;
			case 'x':
				multiplication();
				break;
			case '/':
				divison();
				break;
			default:
				printf("\nInvalid operation. Please try again.\n>");
				operationSelector();
	}
}
int main() {
	printf("\nWelcome to the calculator program. Please select the operation you wish to use. [+,-,x,/]\n>");
	operationSelector();	
return 0;
}
