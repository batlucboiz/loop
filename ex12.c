#include <stdio.h>
int main()
{
	int count = 0;
	int total = 0;
	char choice;
	char subject[50];
	float score;
	
	do{
		printf("enter subject: ");
		scanf("%s", subject);
		printf("enter score: ");
		scanf("%f", &score);
		total += score;
		count++;
		printf("do you want continue ? (Y/N): ");
		fflush(stdin);
		scanf("%c", &choice);
	
	} while (choice == 'y' || choice == 'Y');
	
	if (count > 0) {
		double average = total/count;
		printf("your average score is: %.2lf\n", average);
	} else {
		printf("subject is not input score.\n");
	}
	return 0;
}
