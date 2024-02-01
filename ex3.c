#include <stdio.h>

int main(){
	int i, j, max;
	printf("please enter maximum value: \n");
	printf("for which a table can be printed: ");
	scanf("%d", &max);
	for(i = 0, j = max; i <= max; i++, j--)
	printf("\n%d + %d = %d", i, j, i + j);
	return 0;
}
