#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int lotto[6];
	int num = 0;
	int i = 0, j = 0;
	
	srand(time(NULL));
	
	while(i < 6) {
		num = rand() % 45 + 1;
		for (j = 0; j < i; j++)
			if (num == lotto[j]) break;
		if (i == j) {
			lotto[i] = num;
			i++;
		}
	}

	for (int i = 0; i < 6; i++) {
		printf("%d번 : %d\n", i + 1, lotto[i]);
	}
}