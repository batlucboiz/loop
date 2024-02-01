#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int guess, randomNumber;
	
	srand(time(0));
	randomNumber = rand() % 1000 + 1;
//	printf("lucky number is: %d\n", randomNumber);
	do { 
		printf("Guess the number (between 1 and 1000): ");
		scanf("%d", &guess);
		
		if (guess > randomNumber) {
			printf("Too hight\n");
		} else if (guess < randomNumber)
		{
			printf("Too low\n");
		} else {
			printf("Congratulations! you guessed the number.\n");
		}
	} while (guess != randomNumber);
	return 0;
}
