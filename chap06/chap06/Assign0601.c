/* 파일명: assign0601.c

 * 내용: PA01. 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 get_perimeter 함수를 작성하라 

 * 작성자: 김영재

 * 날짜: 2025.05.15

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
int get_perimeter(int a, int b);

int main()
{
	Print();
	return 0;
}

void Print()
{
	int x, y;

	printf("가로? ");
	scanf("%d", &x);
	printf("세로? ");
	scanf("%d", &y);

	printf("직사각형의 둘레: %d", get_perimeter(x,y));

	return;
}

int get_perimeter(int a, int b)
{
	int length;

	length = a * 2 + b * 2;
	
	return length;
}