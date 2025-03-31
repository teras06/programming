/* 파일명: assign05.c

 * 내용: PA05. 몸무게를 입력받아서 출력하는 프로그램을 작성하시오. 몸무게는 실수로 입력받으며, 소수점 이하 2자리까지만 출력

 * 작성자: 김영재

 * 날짜: 2025.3.31

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Weight(void);

int main()
{
	Weight();
	return 0;
}

void Weight(void)
{
	float wei;
	printf("몸무게?");
	scanf("%f", &wei);

	printf("입력한 몸무게는 %.2fKG입니다.", wei);

	return;
}