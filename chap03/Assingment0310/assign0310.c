/* 파일명: assign0310.c

 * 내용: PA10. 원/달러 환율과 원화를 입력받아 몇 달러인지 출력하는 프로그램을 작성

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
	int kor;
	double rate;


	printf("KRW? ");
	scanf("%d", &kor);
	printf("원/달러 환율? ");
	scanf("%lf", &rate);

	printf("KRW %d = USD %.2lf", kor, kor / rate);
	
	return;
}