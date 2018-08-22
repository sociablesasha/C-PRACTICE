#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct donation {
	char name[20];
	int donation_money;
} Donation;

Donation * input_Donation(void);
void print_Donation(Donation *pary);

int cnt = 0;

int main(void)
{
	Donation * pary = input_Donation();

	print_Donation(pary);

	free(pary);
}

Donation * input_Donation(void)
{
	Donation *pary;

	while (1) {
		if (cnt == 0)
			pary = (Donation *)malloc(sizeof(Donation));
		else
			pary = (Donation *)realloc(pary, sizeof(Donation) * (cnt + 1));
			
		printf("이름 : ");
		scanf("%s", pary[cnt].name);
		
		if (strcmp(pary[cnt].name, "end") == 0)
			break;
		
		printf("기부금 : ");
		scanf("%d", &pary[cnt].donation_money);
		cnt++;
		
		printf("\n");
	}
	return pary;
}

void print_Donation(Donation *pary) 
{
	int total = 0;
	double avg = 0;
	
	//error
	//int index = sizeof(pary) / (sizeof(int) + sizeof(char) * 20); // == sizeof(pary[0])

	for (int i = 0; i < 3; i++)
		total += pary[i].donation_money;

	avg = total / (double)cnt;
	printf("\n총액 : %d", total);
	printf("\n평균 기부액 : %.2lf", avg);
}