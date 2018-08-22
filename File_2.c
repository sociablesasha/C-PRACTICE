#include <Stdio.h>

int main(void)
{
	long fpos;
	FILE *fp;
	fp = fopen("text.txt", "w");
	fputs("123456789", fp);
	fclose(fp);
	fp = fopen("text.txt", "r");
	fpos = ftell(fp);
	printf("%d\n", fpos);
	fseek(fp, -2, SEEK_END);
	fpos = ftell(fp);
	printf("%d\n", fpos);
	fclose(fp);
}