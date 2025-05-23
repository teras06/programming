/* 파일명: assign0602.c

 * 내용: PA02. 한 변의 길이를 매개변수로 전달받아 정사각형의 넓이를 구하는 get_area_of_square 함수를 작성하라
               get_area_of_square 함수를 이용해서 입력받은 한 변의 길이로 정사각형의 넓이를 구하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.05.21

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void get_area_of_square(double a);

int main()
{
	Print();
	return 0;
}

void Print()
{
	double a;

	printf("한 변의 길이? ");
	scanf("%lf", &a);

	get_area_of_square(a);
}

void get_area_of_square(double a)
{
	double x = a * a;
	printf("정사각형의 면적: %f", x);
}