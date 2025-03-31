/* 파일명: assign02.c

 * 내용: PA02. 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 학생의 번호는 정수로,학점은 실수로 입력

 * 작성자: 김영재

 * 날짜: 2025.3.31

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Credit(void);

int main()
{
	Credit();
	return 0;
}

void Credit(void)
{
	int number;
	float credit;

	printf("번호?");
	scanf("%d", &number);

	printf("학점?");
	scanf("%f", &credit);

	printf("%d번 학생의 학점은 %.6f입니다" ,number ,credit);

	return;
}