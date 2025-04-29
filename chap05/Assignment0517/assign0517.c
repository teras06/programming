/* 파일명: assign0517.c

 * 내용: PA17. 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성하라 
               주차 요금은 최초 30분은 2000원, 그 이후는 10분당 1000원씩으로 계산하며, 하루 최대 25000원을 넘을 수 없다. 
               주차 시간은 24시간을 넘을 수는 없다고 가정한다.

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
    int minute, charge;

    printf("주차 시간(분)? ");
    scanf("%d", &minute);

    if (minute <= 30)
    {
        charge = 2000;
    }
    else
    {
        charge = 2000 + ((minute - 30 + 9) / 10) * 1000;
        if (charge > 25000)
            charge = 25000;
    }

    printf("주차 요금: %d원\n", charge);

    return;
}
 
 
 /*

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
    int minute , charge;

    printf("주차 시간(분)? ");
    scanf("%d", &minute);

    if (minute <= 30)
    {
        printf("주차 요금: 2000원");
    }
    if (minute > 30)
    { 
        charge = 2000 + ((minute - 30 + 9) / 10) * 1000;
        printf("주차 요금: %d원", charge);
    }
    if (minute >= 260)
    {
        printf("주차 요금: 25000원");
    }
    
}
*/

