#include <Stdio.h>
#include <Stdlib.h>

int main(void)
{
	int *pi;
	pi = (int *)malloc(sizeof(int));
	
	if (pi == NULL)
	{
		printf("메모리가 부족합니다.\n");
	}

	*pi = 3.14;
	printf("동적할당 영역의 값 : %d\n", *pi);
	free(pi);
}