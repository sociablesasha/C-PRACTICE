#include <Stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main(void)
{
	double max, mid, min;

	printf("실수값 세 개 입력 : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf", max, mid, min);

	return;
}


void swap(double *pa, double *pb)
{
	double temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double *maxp, double *midp, double *minp)
{
	double data[3] = { *maxp, *midp, *minp };

	for (int i = 0; i < 2; i++)
		for (int j = i + 1; j < 3; j++)
			if (data[i] < data[j])
				swap(&data[i], &data[j]);

	*maxp = data[0];
	*midp = data[1];
	*minp = data[2];
}