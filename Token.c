#include <Stdio.h>

char *my_token(char *ps);

int main(void)
{
	char string[80];
	char *p;

	printf("문장 입력 : ");
	gets(string);

	while ((p = my_token(string)) != NULL) {
		printf("%s\n", p);
	}
	
	return 0;
}

char *my_token(char *ps)
{
	static char *mp = NULL;		// 마지막으로 짜른 문자열의 위치 기억
	static int end = 0;			// *ps == NULL 이라면 end = 1
	char *start;				// 문자열의 시작 주소
	char *tp;

	if (ps == NULL)return NULL;
	if (end == 1)	return NULL;

	if (mp == NULL) start = ps;
	else
		start = mp + 1;
	
	tp = start;

	while (*tp != '\0' && *tp != ' ') tp++;

	if (*tp == '\0')
		end = 1;
	else
		*tp = '\0';
	
	mp = tp;

	return start;
}