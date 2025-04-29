/* 파일명: assign0504.c

 * 내용: PA04. 연도를 입력받아 윤년인지 검사하는 프로그램을 작성하시오. 윤년이 되는 조건은 다음과 같다

 * 작성자: 김영재

 * 날짜: 2025.04.28

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print();

int main(void)
{
	Print();
	return 0;
}

void Print(void)
{
	int year;

	printf("연도? ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d년은 윤년입니다", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다", year);
	}

	return;
}