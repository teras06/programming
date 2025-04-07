/* 파일명: assign0304.c

 * 내용: PA04. 물체에 작용한 힘의 크기와 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램을 작성해라
               힘의 크기는 N 단위로 입력받고, 이동한 거리는 M 단위로 입력받는다

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
	double power;
	double length;

	printf("힘(N)? ");
	scanf("%lf", &power);
	printf("이동거리(M)? ");
	scanf("%lf", &length);

	printf("일의 양: %.2lf J", power * length);
	return;
}