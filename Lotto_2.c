#include <Stdio.h>

int check_same(int *lotto_nums, int *my_nums);

int main(void)
{
	int lotto_nums[6] = { 4,10,25,30,41,45 };
	int my_nums[6] = { 1,4,7,22,41,43 };
	int count;
	
	count = check_same(lotto_nums, my_nums);
	
	printf("일치하는 번호의 개수 : %d\n", count);

	return 0;
}

int check_same(int *lotto_nums, int *my_nums)
{
	int count;

	count = 0;

	int i, j;
	for (i = 0; i < 6; i++) {
		j = 0;
		while (lotto_nums[i] <= my_nums[j] || j < 6) {
			if (lotto_nums[i] == my_nums[j])
				count++;
			j++;
		}
	}

	return count;
}