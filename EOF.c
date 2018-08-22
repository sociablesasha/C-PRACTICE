#include <stdio.h>

int main(void)
{
	char ch;
	int res;

	while (1) {
		res = scanf("%c", &ch);
		if (res == 0)break;
		printf("%d\n", ch);
	}
	printf("%d", EOF);
	return 0;
}