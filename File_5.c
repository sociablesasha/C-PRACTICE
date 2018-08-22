#include <Stdio.h>

int main(void)
{
	FILE *fp;
	int data;

	fp = fopen("text.txt", "w");
	fputs("12345-", fp);
	fclose(fp);
	
	fp = fopen("text.txt", "r");
	for (int i = 0; i < 5; i++) {
		fseek(fp, i, SEEK_SET);
		data = ftell(fp);
		printf("%d", data + 1);
		
		fseek(fp, -1, SEEK_END);
		fscanf(fp, "%c", &data);
		printf("%c", data);
	}
	fclose(fp);
}