#include <stdio.h>
#define TRANS 'a' - 'A';

int main(void)
{
	char chWord = 0;

	while (chWord != -1) {
		chWord = getchar();

		if (chWord >= 65 && chWord < 92) {
			chWord += TRANS;
		}
		else if (chWord >= 92 && chWord < 123) {
			chWord -= TRANS;
		}

		putchar(chWord);
	}
}