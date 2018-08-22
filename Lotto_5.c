#include <stdio.h>
#include <time.h>

int check_same(int *arr1, int *arr2) {
	int cnt = 0;

	for (int i = 0; i < 6; i++) {

	}
}

int main(void)
{
	int lotto[6];
	int mylotto[6];

	printf("구입한 로또 번호 : ");
	for (int i = 0; i < 6; i++)
		scanf("%d", mylotto[i]);

	srand(time(NULL));
	int num, i = 0, j;

	while (i < 6) {
		num = rand() % 45 + 1;
		for (j = 0; j < i; j++)
			if (num == mylotto[j]) break;
		if (i == j)
			lotto[i] = num;
	}

	int cnt = check_same(lotto, mylotto);
}