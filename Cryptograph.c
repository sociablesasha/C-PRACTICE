#include <stdio.h>

int main(void)
{
	char string[80];
	int i, ascii, cnt;

	printf("문장 입력 : ");
	scanf("%s", string);


	i = 0;
	cnt = 0;
	do {
		ascii = string[i];

		if (ascii >= 65 && ascii <= 90) {
			string[i] += 32;
			cnt++;
		}
		i++;
	} while (ascii != '\0');

	printf("바뀐 문장 : %s\n", string);
	printf("바뀐 문자 수 : %d\n", cnt);
}