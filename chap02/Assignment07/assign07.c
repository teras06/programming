/* 파일명: assign07.c

 * 내용: PA07. 커피 사이즈(S,T,G)와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오. 커피 사이즈는 S,T,G 세가지 문자 중 하나로 입력

 * 작성자: 김영재

 * 날짜: 2025.3.31

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Coffee(void);

int main()
{
	Coffee();
	return 0;
}

void Coffee(void)
{
	char size;
	int number;
	printf("커피 사이즈(S,T,G)와 주문 수량?");
	scanf("%c %d",&size ,&number);

	printf("%c 사이즈 %d잔을 주문합니다.", size, number);

	return;
}