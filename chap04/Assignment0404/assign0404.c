/* 파일명: assign0404.c

 * 내용: PA04. 용매의 질량과 용질의 질량을 정수로 입력받아 용액의 퍼센트 농도를 구하는 프로그램을 작성하라
               용매의 질량과 용질의 질량은 g 단위로 입력받는다

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
	double mae, jil, nong;

	printf("용매(g)? ");
	scanf("%lf", &mae);
	printf("용질(g)? ");
	scanf("%lf", &jil);

	nong = (jil / (mae + jil)) * 100;

	printf("농도: %.2lf %%", nong);
	return;
}