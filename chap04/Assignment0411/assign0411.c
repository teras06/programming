/* 파일명: assign0411.c

 * 내용: PA11. 제품의 가격과 할인율(%)을 입력받아서 할인가와 에누리 금액을 출력하는 프로그램을 작성하라

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
	int price;
	double discount;

	printf("제품의 가격? ");
	scanf("%d", &price);
	printf("할인율(%%)? ");
	scanf("%lf", &discount);

	int enuri = price * discount / 100;
	int discount_price = price - enuri;

	printf("할인가: %d(%d 할인)", discount_price, enuri);

	return;
}