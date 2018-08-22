#include <Stdio.h>

int main(void)
{
	int ch;
	FILE *in, *out;
	in = fopen("text.txt", "w");
	fputs("123456789", in);
	fclose(in);
	out = fopen("text.txt", "r");
	fseek(out, -2, SEEK_END);
	//fseek(out, 3, SEEK_SET);
	fseek(out, 0, SEEK_CUR);
	ch = fgetc(out);
	printf("%c", ch);
	fclose(out);
}