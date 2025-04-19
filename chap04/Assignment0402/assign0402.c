/* 파일명: assign0402.c

 * 내용: PA02. 화씨 온도(°F)를 입력받아 섭씨 온도(°C)로 변환해서 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.04.15

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void tem(void);

int main(void)
{
	tem();
	return 0;
}

void tem(void)
{
	double Ftem, Ctem;

	printf("화씨온도?");
	scanf("%lf", &Ftem);

	Ctem = (Ftem - 32) * (5 / 9);

	printf("%.2lf F = %.2lf C", Ftem, Ctem);
	return;
}

