#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int guess, randomNumber;
	
	srand(time(0));
	
	int temp = rand();
	printf("random number: %d\n", temp);
	randomNumber = temp % 100 + 1;
	printf("Final random number: %d\n", randomNumber);
	
}
