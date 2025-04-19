/* 파일명: assign0407.c

 * 내용: PA07. 직각 삼각형에서 직각을 낀 두 변 a, b의 길이를 입력받아 빗변의 길이를 구하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.04.15

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Print(void);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	double a, b, c;

	printf("밑변? ");
	scanf("%lf", &a);
	printf("높이? ");
	scanf("%lf", &b);

	c = sqrt((a * a) + (b * b));
	
	printf("빗변의 길이: %.6lf", c);

	return;
}