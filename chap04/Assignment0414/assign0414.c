/* 파일명: assign0414.c

 * 내용: PA14. 기본 요금과 월 사용량(kWh)을 입력받아 전기 요금을 계산하는 프로그램을 작성하라
               사용량에 따른 요금은 190원/hWh 이다

 * 작성자: 김영재

 * 날짜: 2025.04.15

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
	int n_charge, amount, e_charge;

	printf("기본 요금? ");
	scanf("%d", &n_charge);
	printf("월 사용량(kWh)? ");
	scanf("%d", &amount);

	e_charge = n_charge + amount * 190;

	printf("전기 요금: %d", e_charge);

	return;
}