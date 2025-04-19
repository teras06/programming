/* 파일명: assign0408.c

 * 내용: PA08. 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하라
               이때 파이는 3.141592라고 한다

 * 작성자: 김영재

 * 날짜: 2025.04.15

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#define pi 3.141592
#include <stdio.h>
#include <math.h>

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int radius;

    printf("반지름의 길이? ");
    scanf("%d", &radius);

    double v;
    v = (4.0/3.0) * pi * pow(radius, 3);

    printf("구의 부피 : %lf", v);
    return;
}