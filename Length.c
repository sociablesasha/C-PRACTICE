#include <stdio.h>

int main(void)
{
	int longest, count;
	char ch;

	longest = 0;
	count = 0;

	while (1) {
		ch = fgetc(stdin);
		if (ch == -1) break;
		if (ch == '\n') {
			if (longest < count)
				longest = count;
				count = 0;
				continue;
		}
		count++;
	}

	printf("가장 긴 단어의 길이 : %d", longest);
}