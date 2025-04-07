/* 파일명: assign0302.c

 * 내용: PA02. 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성해라

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
	int width;
	int length;

	printf("가로의 길이? ");
	scanf("%d", &width);
	printf("세로의 길이? ");
	scanf("%d", &length);

	printf("직사각형의 넓이: %d\n", length * width);
	printf("직사각형의 둘레: %d", length * 2 + width * 2);

	return;
}