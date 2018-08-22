#include <stdio.h>

int main(void)
{
	int arr[5], temp, total;
	double avg;

	printf("5명 심사위원의 점수 입력 : ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	total = 0;

	printf("유효 점수 : ");
	for (int i = 1; i < 4; i++) {
		printf("%d ", arr[i]);
		total += arr[i];
	}
	puts("");

	avg = total / 3.0;
	printf("평균 : %.1lf", avg);
	puts("");
}