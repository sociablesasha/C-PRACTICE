#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NUMBER 5

typedef struct student {
	int num;
	char name[20];
	int korean, english, math;
	int total;
	double avg;
	char grade;
} Student;

void input_data(Student *pary);
void calc_data(Student *pary);
void sort_data(Student *pary);
void print_data(Student *pary);


int main(void)
{
	Student ary[5];

	input_data(ary);
	calc_data(ary);

	printf("정렬 전...\n");
	print_data(ary);
	
	sort_data(ary);
	printf("정렬 후...\n");
	print_data(ary);
}

void input_data(Student *pary)
{
	for (int i = 0; i < NUMBER; i++) {
		printf("학번 : ");
		scanf("%d", &pary->num);
		printf("이름 : ");
		scanf("%s", pary->name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d %d %d", &pary->korean, &pary->english, &pary->math);
		pary++;
		// pary->korean = pary[i].korean
		printf("\n");
	}
}

void calc_data(Student *pary)
{
	for (int i = 0; i < NUMBER; i++) {
		pary->total = pary->korean + pary->english + pary->math;
		pary->avg = pary->total / 3.0;

		if (90 <= pary->avg)
			pary->grade = 'A';
		else if (80 <= pary->avg)
			pary->grade = 'B';
		else if (70 <= pary->avg)
			pary->grade = 'C';
		else
			pary->grade = 'F';

		pary++;
	}
}

void sort_data(Student *pary)
{
	Student temp;

	for (int i = 0; i < NUMBER - 1; i++) {
		for (int j = i + 1; j < NUMBER; j++) {
			if (pary[i].avg < pary[j].avg) {
				temp = pary[i];
				pary[i] = pary[j];
				pary[j] = temp;
			}
		}
	}
}

void print_data(Student *pary)
{
	for (int i = 0; i < NUMBER; i++) {
		printf("%d %s ", pary->num, pary->name);
		printf("%d %d %d ", pary->korean, pary->english, pary->math);
		printf("%d %lf %c ", pary->total, pary->avg, pary->grade);
		puts("\n");
	}
}