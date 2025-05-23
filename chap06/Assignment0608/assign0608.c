/* 파일명: assign0608.c

 * 내용: PA08. RGB 색살으로부터 red, green, blue 값을 각각 추출하는 get_red, get_green, get_blue 함수를 정의하라
               이 함수들을 이용해서 입력받은 RGB 색상의 red, green, blue 값을 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.05.20

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(unsigned int r);
int get_green(unsigned int g);
int get_blue(unsigned int b);
void Print(void);


int main()
{
	Print();
	return 0;
}

void Print()
{
	unsigned int x;

	printf("RGB 색상? ");
	scanf("%x", &x);

	printf("RGB %06x의 red: %d , green: %d ,blue: %d", x, get_red(x), get_green(x), get_blue(x));

	return;
}


int get_red(unsigned int r)
{
	unsigned int red;
	red = r >> 16;

	return red;
}

int get_green(unsigned int g)
{
	unsigned int green;
	green = g << 16;
	green = green >> 24;

	return green;
}

int get_blue(unsigned int b)
{
	unsigned int blue;
	blue = b << 24;
	blue = blue >> 24;

	return blue;
}

