/* 파일명: assign0306.c

 * 내용: PA06. 아파트의 면적을 제곱미터(m^2)로 입력받아 몇 평인지 작성하는 프로그램을 작성하라
               프로그램을 작성할 때 이름 있는 상수를 이용

 * 작성자: 김영재

 * 날짜: 2025.04.07

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#define Pyeong 0.3025
#include <stdio.h>

void apt(void);

int main()
{
	apt();
	return 0;
}

void apt(void)
{
	double area;
	double square;

	printf("아파트의 면적(제곱미터) ? ");
	scanf("%lf", &square);

	area = Pyeong * square;

	printf("%.2lf 제곱미터 = %.2lf 평", square, area);
	return;
}