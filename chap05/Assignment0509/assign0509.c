/* 파일명: assign0509.c

 * 내용: PA09. 햄버거 가게의 계산서 프로그램을 작성하라 햄버거는 4000원, 콜라는 1500원, 감자튀김은 2000원이고, 
               세 가지를 세트로 주문하면 6500원이라고 하자. 햄버거, 콜라, 감자튀김의 수량을 입력받아서 최대한 세트로 구성하고 
               나머지는 단품으로 계산하도록 한다. 예를 들어 햄버거 2, 콜 라 1, 감자튀김 3을 주문하면 
               계산은 세트 1, 햄버거 1, 감자튀김 2로 해야 한다.

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
    int ham, fry, cora, set, total;

    printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");
    printf("햄버거 개수? ");
    scanf("%d", &ham);
    printf("감자튀김 개수? ");
    scanf("%d", &fry);
    printf("콜라 개수? ");
    scanf("%d", &cora);

    set = ham;
    if (fry < set) set = fry;
    if (cora < set) set = cora;

    ham -= set;
    fry -= set;
    cora -= set;

    total = set * 6500 + ham * 4000 + fry * 2000 + cora * 1500;


    printf("상품명       단가    수량    금액\n");
    if (set > 0) {
        printf("세트         6500     %d     %d\n", set, set * 6500);
    }
    if (ham > 0) {
        printf("햄버거       4000     %d     %d\n", ham, ham * 4000);
    }
    if (fry > 0) {
        printf("감자튀김     2000     %d     %d\n", fry, fry * 2000);
    }
    if (cora > 0) {
        printf("콜라       1500     %d     %d\n", cora, cora * 6500);
    }
    printf("--------------------------------\n");
    printf("합계                        %d", total);


    return;
}