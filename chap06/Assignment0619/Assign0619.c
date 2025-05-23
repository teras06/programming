/* 파일명: assign0619.c

 * 내용: PA19. 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 graph 함수를 작성하라 
               예를 들어 graph(1200, 100);은 100마다 *을 하나씩 출력하므로 *을 12개 출력하고, 
               graph(1200, 10);은 10마다 *을 하나씩 출력하므로 *을 120개 출력한다
               0~9999사이의 임의의 숫자 3개를 생성하고 스케일 100으로 그래프를 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.05.20

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Print(void);
void graph(int a, int b);

int main()
{
    srand(time(NULL));

    Print();
    return 0;
}

void Print()
{
    int i, x;

    for (i = 1;i < 4;i++)
    {
        int x = rand() % 10000;

        printf("%d:", x);
        graph(x, 100);
        printf("\n");
    }
}

void graph(int a, int b)
{
    int i;

    for (i = 0; i < a / b; i++)
    {
        printf("*");
    }
}