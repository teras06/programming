/* 파일명: assign0405.c

 * 내용: PA05. 반지름과 높이를 입력받아 원기둥의 부피를 구하는 프로그램을 작성하라
               이떄 파이는 3.141592라고 한다 

 * 작성자: 김영재

 * 날짜: 2025.04.15

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#define pi 3.141592
#include <stdio.h>

void Print(void);

int main()
{
	Print();
	return 0;
}


void Print(void)
{
	int r, h;

	printf("반지름의 길이? ");
	scanf("%d", &r);
	printf("높이? ");
	scanf("%d", &h);

	double volume = pi * r * r * h;

	printf("원기둥의 부피: %.6lf", volume);
}