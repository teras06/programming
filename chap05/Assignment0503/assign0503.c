/* 파일명: assign0503.c

 * 내용: PA03. 거스름돈의 금액을 입력받아 오만원, 만원, 천원, 백원, 십원 짜리가 각각 몇 개 필요한지 구해서 출력하라
         십원 미만 단위는 절사

 * 작성자: 김영재

 * 날짜: 2025.04.28

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(int money);
int ger();

int main(void)
{
    int money = ger();
    Print(money);
    return 0;
}

int ger()
{
    int mon;
    printf("거스름돈? ");
    scanf("%d", &mon);

    int money = mon / 10 * 10;  // 10원 미만 절사
    return money;
}

void Print(int money)
{
    printf("거스름돈 (10원 미만 절사): %d\n", money);

    if (money >= 50000)
        printf("50000원 %d장\n", money / 50000);
    else
        printf("50000원 0장\n");

    money %= 50000;

    if (money >= 10000)
        printf("10000원 %d장\n", money / 10000);
    else
        printf("10000원 0장\n");

    money %= 10000;

    if (money >= 5000)
        printf(" 5000원 %d장\n", money / 5000);
    else
        printf(" 5000원 0장\n");

    money %= 5000;

    if (money >= 1000)
        printf(" 1000원 %d장\n", money / 1000);
    else
        printf(" 1000원 0장\n");

    money %= 1000;

    if (money >= 100)
        printf("  100원 %d개\n", money / 100);
    else
        printf("  100원 0개\n");

    money %= 100;

    if (money >= 10)
        printf("   10원 %d개\n", money / 10);
    else
        printf("   10원 0개\n");
}