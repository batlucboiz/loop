#include <stdio.h>

int main()
{
		int num1, num2;
		num2 = 0;
		do{
			printf("\nEnter a number: ");
			scanf("%d", &num1);
			printf("No. is %d", num1);
			num2++;
		} while (num1 != 0);
		printf("\n the total number entered were %d",--num2);
	return 0;
}
