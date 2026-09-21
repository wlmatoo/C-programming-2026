#pragma warning(disable:4996)
#include <stdio.h>

/*int main(void) {
	double inch, cm;
	double F, C;
	double r, area;

	scanf("%lf", &inch);
	cm = inch * 2.54;
	printf("%lf inch는 %lf cm 입니다.\n", inch, cm);

	scanf("%lf", &C);
	F = (C * 1.8) + 32;
	printf("섭씨 %lf도는 화씨 %lf도 입니다.\n", C, F);

	scanf("%lf", &r);
	area = r * r *3.14;
	printf("반지름이 %lf인 원의 넓이는 %lf입니다.", r, area);

	return 0;
}*/

void ex15(void) {
	int total, hours, minutes, seconds;

	scanf("%d", &total);
	hours = total / 3600;
	minutes = (total % 3600) / 60;
	seconds = total % 60;

	printf("%d시간 %d분 %d초\n");

	return 0;
}

void ex16(void) {
	int score, attendance, passed;

	scanf("%d %d", &score, &attendance);

	passed = (score >= 60) && (attendance >= 80);

	printf("%d\n", passed);

	return 0;
}

void ex17(void) {
	unsigned int READ = 0x01;
	unsigned int WRITE = 0x02;
	unsigned int EXEC = 0X04;

	unsigned int permission = READ | WRITE;

	permission |= EXEC;

	printf("%u\n", permission);

	return;
}

void ex18(void) {
	int amount;

	scanf("%d", &amount);

	int won10000 = amount / 10000;
	amount %= 10000;

	int won1000 = amount / 1000;
	amount %= 1000;

	int won100 = amount / 100;
	amount %= 100;

	int won10 = amount / 10;
	amount %= 10;

	printf("10000:%d 1000:%d 100:%d 10:%d\n", won10000, won1000, won100 won10);

	return 0;
}

void ex19(void) {
	int year, leap;

	scanf("%d", &year);

	leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

	printf("%d\n", leap);

	return 0;
}


int main() {
	ex19();
}