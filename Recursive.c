#include <stdio.h>

int rec_func(int n);

int main(void)
{
	int n, result;
	
	printf("1 부터 n 까지의 합 : ");
	scanf("%d", &n);

	result = rec_func(n);

	printf("result : %d\n", result);
}

int rec_func(int n)
{
	//10 9 8 7 6 5 4 3 2 1 return
	if (n == 1) return 1;
	else return (n + rec_func(n - 1));
}