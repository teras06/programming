/* 파일명: assign0307.c

 * 내용: PA07. 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램을 작성하라
               실수값을 입력받을 때는 12.34처럼 소수 표기 방법이나 1.234e2처럼 지수 표기 방법을 둘 다 사용할 수 있게 하고
               제곱과 세제곱을 출력할 때는 지수 표기 방법으로 출력

 * 작성자: 김영재

 * 날짜: 2025.04.07

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	double num;

	printf("실수? ");
	scanf("%lf", &num);
	
	printf("제곱: %e\n", num * num);
	printf("세제곱: %e", num * num * num);

	return;
}