#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

typedef struct Stuck {
	int price;
	int stuck;
	char name[20];
}vending;

int check(vending * want, int my_money);
int buy(vending * want, int my_money);
int input_choice(int n);
int add_money(int money);

vending * print_menu(vending * a);
vending * scan_menu(vending * a);

int main(void) {
	int my_money;
	int vending_money = 999999;
	int choice;
	int success;

	vending machine[5];
	scan_menu(&machine);

	printf("\nmy money > ");
	scanf("%d", &my_money);

	while (1) {
		// menu
		print_menu(&machine);
		choice = input_choice(0);

		//calculator
		success = check(&machine[choice - 1], my_money);
		if (success == 1)
			buy(&machine[choice - 1], my_money);

		// 실행 or 종료
		choice = input_choice(1);
		if (choice == 1)
			return 0;

		// 돈 추가 입력
		choice = input_choice(2);
		if (choice == 1)
			continue;
		else {
			my_money = add_money(my_money);
		}

		printf("my_money > %d", my_money);
	}

	printf("\n");
	printf("my_money > %d", my_money);
}

int input_choice(int n) {
	int choice;

	if (n == 0) {
		printf("\nchoice > ");
		scanf("%d", &choice);
	}
	else if (n == 1) {
		printf("\n계속 : 0\n종료 : 1\n선택 > ");
		scanf("%d", &choice);
	}
	else {
		printf("\n돈을 추가하시겠습니까?\n");
		printf("Yes : 0\nNo : 1");
		scanf("%d", &choice);
	}

	return choice;
}

int buy(vending * want, int my_money) {
	(want->stuck)--;
	my_money -= (want->price);
	printf("구매 완료 : % s", (want->name));

	return my_money;
}

int add_money(int money) {
	int add;
	printf("얼마?");
	scanf("%d", &add);

	money += add;

	return money;
}

int check(vending * want, int my_money)
{
	int success;

	if ((want->stuck) == 0) {
		printf("품절입니다.");
		return success = 0;
	}
	if ((want->price) > my_money) {
		printf("돈이 부족합니다.");
		return success = 0;
	}

	return success = 1;
}

vending * print_menu(vending * a)
{
	for (int i = 0; i < 5; i++) {
		printf("%8s", a[i].name);
	}

	printf("\n");

	for (int i = 0; i < 5; i++) {
		printf("%8d", a[i].price);
	}

	printf("\n");

	for (int i = 0; i < 5; i++) {
		if (a[i].stuck == 0) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			printf("%8s", "●");
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
			printf("%8s", "●");
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

vending * scan_menu(vending * a)
{
	printf("자판기에 음료를 넣습니다.\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 넣을 음료는? >> ", i + 1);
		scanf("%s", a[i].name);
		printf("%d번째 음료의 가격은? >> ", i + 1);
		scanf("%d", &a[i].price);
		printf("%d번째 넣을 음료의 갯수는? >> ", i + 1);
		scanf("%d", &a[i].stuck);
		printf("\n");
	}
}