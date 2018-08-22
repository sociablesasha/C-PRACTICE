#include <stdio.h>
#include <WinSock2.h>
#pragma comment(lib, "ws2_32.lib")

int main(void) 
{
	int ivar = 3;
	char *p = (char *)&ivar;

	int i = 0;
	printf("\nBefore htonl : ");
	for (i; i < sizeof(int); i++) {
		printf(" %x", *(p + i));
	}
	printf("\tvalue of i : %d", ivar);

	printf("\n\nAfter htonl : ");
	ivar = htonl(ivar);
	for (i = 0; i < sizeof(int); i++) {
		printf(" %x", *(p + i));
	}
	printf("\tvalue of i : %d", ivar);
	printf("\n");
	return 0;
}