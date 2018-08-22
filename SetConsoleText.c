#include <stdio.h>
#include <Windows.h>

int main(void)
{
	int string1[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int string2[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

	int cnt = 0;
	int num = 0;
	
	//별
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	printf("         *\n       *****\n        * *\n");

	//나뭇잎
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	for (int number = 0; number < 10; number++) {
		if (cnt == 3) {
			number = ++num;
			cnt = 0;
			
		}
		for (int i = 0; i < string2[number]; i++)
			printf(" ");
		for (int j = 0; j < string1[number]; j++)
			printf("*");
		cnt++;
		printf("\n");
	}

	//기둥
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	for (int i = 0; i < 5; i++) {
		printf("        ");
		for (int j = 0; j < 3; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}