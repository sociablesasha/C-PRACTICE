#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int *lotto_nums)
{
	int count, flag;

	count = 0;

	while (count < 6) {
		flag = 0;
		printf("번호 입력 : ");
		scanf("%d", (lotto_nums + count));
		for (int i = 0; i < count; i++) {
			if (lotto_nums[count] == lotto_nums[i]) {
				printf("같은 번호가 있습니다!\n");
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			count++;
	}
}

void print_nums(int *lotto_nums)
{
	printf("로또 번호 : ");

	for (int i = 0; i < 6; i++)
		printf("%d ", lotto_nums[i]);
}