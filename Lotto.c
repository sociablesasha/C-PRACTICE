#include <Stdio.h>

int main(void)
{
	int lotto[6], cnt, flag;

	cnt = 0;

	for (int i = 0; cnt < 6; i++) {
		printf("로또번호 입력 : ");
		scanf("%d", &lotto[cnt]);
		flag = 0;

		for (int j = 0; j < cnt; j++)
			if (lotto[cnt] == lotto[j]) {
				printf("같은 번호가 있습니다.\n");
				flag = 1;
				break;
			}
		if (flag == 0)
			cnt++;
	}
	
	printf("입력된 로또번호 : ");
	for (int i = 0; i < 6; i++)
		printf("%3d", lotto[i]);
}