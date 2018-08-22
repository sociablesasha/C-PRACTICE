#include <Stdio.h>

int main(void)
{
	char ch1, ch2;

	scanf("%c%c", &ch1, &ch2);
	printf("ch1 : %c , ch2 : %c\n", ch1, ch2);
	// '\n' in buffer
	scanf("%c %c", &ch1, &ch2);
	// so ch1 = '\n'!
	// so we have to clear the buffer (fflush)
	printf("ch1 : %c , ch2 : %c\n", ch1, ch2);

	return 0;
}