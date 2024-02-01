#include <stdio.h>

#define COFFEE_PRICE 2.5
#define TEA_PRICE 2.0
#define SMOOTHIE_PRICE 3.0

int main() {
	int numCoffees = 0, numTeas = 0, numSmoothies = 0;
	float totalCost;
	char choice;
	
	printf("Welcome to coffee shop!\n");
	
	do{
		printf("\n--- Menu ---\n");
		printf("1. Coffee ($%.2f)\t", COFFEE_PRICE);
		printf("2. Tea ($%.2f)\t", TEA_PRICE);
		printf("3. Smoothie ($%.2f)\t", SMOOTHIE_PRICE);
		printf("4. Quit\n");
		
		printf("Enter your choice (1-4): ");
		fflush(stdin);
		scanf("%c", &choice);
		
		switch (choice) {
			case '1':
				numCoffees++;
				break;
			case '2':
				numTeas++;
				break;
			case '3':
				numSmoothies++;
				break;
			case '4':
				break;
			default:
				printf("Invalid choice. Please try again.\n");				
		}
	} while (choice != '4');
	
	totalCost = (numCoffees * COFFEE_PRICE) + (numTeas * TEA_PRICE) + (numSmoothies * SMOOTHIE_PRICE);
	
	printf("\nOder Details:\n");
	printf("Coffees: %d\n", numCoffees);
	printf("Teas: %d\n", numTeas);
	printf("Smoothies: %d\n", numSmoothies);
	printf("Total Cost: $%.2f\n", totalCost);
	
	printf("\n Thank you for your order! Enjoy your drink!\n");
	
	return 0;
}
