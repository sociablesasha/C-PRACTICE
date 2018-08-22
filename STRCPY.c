#include <stdio.h>

char *my_strcpy(char *pd, char *ps);

int main(void)
{
	char string[80] = "Apple";

	printf("Before : %s\n", string);
	my_strcpy(string, "Kiwi");
	printf("After1 : %s\n", string);
	printf("After2 : %s\n", my_strcpy(string, "Banana"));

	return 0;
}

char *my_strcpy(char *pd, char *ps)
{
	char *po = pd;

	while (*ps != '\0') {
		*pd = *ps;
		pd++;
		ps++;
	}

	*pd = '\0';

	return po;
}