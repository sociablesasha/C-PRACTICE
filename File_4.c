#include <Stdio.h>

int main(void) 
{
	FILE *fp;
	char str[20];
	fp = fopen("text.txt", "w");
	fprintf(fp, "10405 김용현 010-5914-0768");
	fclose(fp);
	fp = fopen("text.txt", "r");
	fseek(fp, 5, SEEK_SET);
	fscanf(fp, "%s", str);
	printf("%s\n", str);
	fclose(fp);
}