#include <stdio.h>
#include <windows.h>

void set(int h, int m);
void show(void);
void move(void);

int global_h, global_m;
char *ch;

int main(void)
{
	int h, m;
	int timer;

	for (int i = 0; i < 2; i++) {
		printf("[ 실.행.결.과 %d ]\n", i + 1);
		printf("최초 시간과 분 입력 ( 24시간 ) : ");
		scanf("%d %d", &h, &m);

		set(h, m);
		printf("설정된 시간 : ");
		show();

		printf("경과 시간 입력 ( 분 ) : ");
		scanf("%d", &timer);
		for (int j = 0; j < timer; j++)
			move();

		printf("현재 시간 : ");
		show();

		puts("");
	}
}

void set(int h, int m)
{
	if (h > 12) {
		global_h = h - 12;
		ch = "PM";
	}
	else {
		global_h = h;
		ch = "AM";
	}

	global_m = m;
}

void show(void)
{
	printf("%d:%d (%s)\n", global_h, global_m, ch);
}

void move(void)
{
	global_m++;
	if (global_m >= 60) {
		global_h++;
		global_m -= 60;
	}

	if (global_h >= 12 && ch == "PM") {
		ch = "AM";
		global_h -= 12;
	}

	else if (global_h == 12) {
		ch = "PM";
		global_h -= 12;
	}

	Sleep(500);
}