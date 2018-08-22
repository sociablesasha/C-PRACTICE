#include <stdio.h>

int total(int kor, int eng, int mat);
double average(int tot);

int main(void)
{
	int kor, eng, mat, tot;
	double avg;
	printf("세 과목의 점수 : ");
	scanf("%d %d %d", &kor, &eng, &mat);

	tot = total(kor, eng, mat);
	avg = average(tot);

	printf("국어 : %d\n", kor);
	printf("영어 : %d\n", eng);
	printf("수학 : %d\n", mat);
	printf("총점 : %d\n", tot);
	printf("평균 : %.1lf\n", avg);
}

int total(int kor, int eng, int mat) {
	int tot = kor + eng + mat;

	return tot;
}

double average(int tot) {
	double avg = tot / 3.0;

	return avg;
}