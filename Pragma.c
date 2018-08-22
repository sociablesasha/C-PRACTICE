#include <stdio.h>

struct A {
	char len;
	int values[10];
};

#pragma pack(1)
typedef struct {
	char len;
	int values[10];
} B;

int main(void)
{
	printf("Size of A = %d\n", sizeof(struct A));
	printf("Size of B = %d\n", sizeof(B));
	return 0;
}