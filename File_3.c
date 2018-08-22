#include <Stdio.h>

int main(void)
{
	FILE *fp;
	char str[20];
	fp = fopen("text.txt", "w");
	fputs("I love you.", fp);
	fclose(fp);
	fp = fopen("text.txt", "r");
	fseek(fp, 2, SEEK_SET);
	fscanf(fp, "%s", str);
	printf("%s", str);
	fclose(fp);
}