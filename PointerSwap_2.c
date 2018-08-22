#include <Stdio.h>

void rotate(int *pa, int *pb, int *pc);

int main(void)
{
	int a, b, c, key;

	a = 1;
	b = 2;
	c = 3;

	do {
	printf("%d : %d : %d", a, b, c);
	key = getchar();
	rotate(&a, &b, &c);
	} while (key == 10);
}

void rotate(int *pa, int *pb, int *pc)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;
}