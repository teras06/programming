/* 파일명: assign0410.c

 * 내용: PA10. 항공권 예약 시 여정의 총 소요시간을 시간 단위로 입력받아 며칠 몇 시간 몇 분인지 출력하는 프로그램을 작성하라
               총 소요시간은 실수로 입력받는다

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
	double hour_fly;
	int day, hour, minute_all , minute;

	printf("비행 소요시간(시간)? ");
	scanf("%lf", &hour_fly);

	minute_all = (int)(hour_fly * 60);

	day = minute_all / (24 * 60);

	hour = (minute_all % (24 * 60)) / 60;

	minute = minute_all % 60;

	printf("비행 소요시간은 %d일 %d시간 %d분 입니다.", day, hour, minute);
	return;
}

