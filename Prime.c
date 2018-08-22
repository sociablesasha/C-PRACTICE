#include <stdio.h>

int prime_check(int n);

int main(void)
{
	int cnt, n, check;
	
	cnt = 0;

	printf("양수 입력 : ");
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		check = prime_check(i);

		if (check == 1) {
			printf("%5d", i);
			cnt++;

			if ((cnt % 5) == 0)
				printf("\n");

		}
	}
}

int prime_check(int n)
{
	int cnt = 0;

	for (int i = 2; i < n; i++) {
		if ((n % i) == 0)
			return 0;
	}
	
	return 1;
}