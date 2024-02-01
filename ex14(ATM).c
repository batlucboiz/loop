#include <stdio.h>

int main()
{
	int pin = 1234;
	int balance = 100000;
	int maxAttempts = 3;
	int option;
	int enteredPin;
	int withdrawAmount;
	
	printf("Chao mung ban den ATM!\n");
	
	int attempts = 0;
	while (attempts < maxAttempts) {
		printf("Nhap ma PIN cua ban (Con lai %d lan thu): ", maxAttempts - attempts);
		scanf("%d", &enteredPin);
		
		if (enteredPin == pin) {
			printf("dang nhap thanh cong!\n");
			break;
		} else {
			printf("Ma PIN khong hop le.\n");
			attempts++;
		}
	}
	
	if (attempts == maxAttempts) {
		printf("Ban da nhap sai qua so lan cho phep. Khoa the.\n");
		return 1;
	}
	
	while (1) {
		printf("\nLua chon cua ban: \n");
		printf("1. Kiem tra so du \n");
		printf("2. Rut tien\n");
		printf("3. Ket thuc\n");
		
		scanf("%d", &option);
		
		switch(option) {
			case 1:
				printf("So du cua ban: %d VND\n", balance);
				break;
			case 2:
				printf("Nhap so tien muon rut: ");
				scanf("%d", &withdrawAmount);
				if (withdrawAmount> balance) {
					printf("so du khong du de rut tien!\n");
				}	else {
					balance -= withdrawAmount;
					printf("Ban da rut %d VND. So du con lai: %d VND\n", withdrawAmount, balance);
				}
				break;
			case 3:
				printf("Cam on ban da su dung dich vu ATM. Hen gap lai!\n");
				return 0;
			default:
				printf("Lua chon khong hop le. Vui long chon lai.\n");	
				
		}
	}
	return 0;
}
