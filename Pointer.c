#include <stdio.h>

void func(int *mod, int *rem)
{
	int num;

	printf("양수 입력 : ");
	scanf("%d", &num);

	*mod = num / 4;
	*rem = num % 4;

	return;
}

int main(void)
{
	//모든 주소와 포인터는 가르키는 자료형과 관계없이 크기가 같다.
	int mod, rem;

	func(&mod, &rem);
	printf("몫 : %d, 나머지 : %d", mod, rem);

	return 0;
}