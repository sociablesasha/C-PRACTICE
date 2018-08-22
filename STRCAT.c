#include <stdio.h>

char *my_strcat(char *pd, char *ps);

int main(void)
{
	char string1[80] = "apple ";
	char string2[80] = "good";

	printf("Before : %s\n", string1);
	my_strcat(string1, string2);
	printf("After1 : %s\n", string1);
	printf("After2 : %s\n", my_strcat(string1, "!!!!"));

	return 0;
}

char *my_strcat(char *pd, char *ps)
{
	char *po = pd;

	while (*pd != '\0') {
		pd++;
	}

	while (*ps != '\0') {
		*pd = *ps;
		pd++;
		ps++;
	}

	*pd = '\0';

	return po;
}