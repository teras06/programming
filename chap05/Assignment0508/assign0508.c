/* 파일명: assign0508.c

 * 내용: PA08. 비트 연산을 수행하는 계산기를 프로그램하라 
               &는 비트 AND, I는 비트 OR, ^는 비트 XOR 연산을 처리한다 "0xAB & 0xCC"처럼 연산식을 입력해서 연산 결과를 구한다
               비트 연산이므로 연산식을 입력받을 때 10진수, 8진수, 16진수를 사용할 수 있게 하고, 연산의 결과는 16진수로 출력한다

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
    int x, y;
    char unit;

    printf("비트 연산식 ");
    scanf("%i %c %i", &x, &unit, &y);

    switch (unit)
    {
    case '&':
        printf("%x & %x = %x ", x, y, x & y);
        break;
    case '|':
        printf("%x | %x = %x ", x, y, x | y);
        break;
    case '^':
        printf("%x ^ %x = %x ", x, y, x ^ y);
        break;
    }

    return;
}