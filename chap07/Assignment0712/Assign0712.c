/* 파일명: Assign0712.c

 * 내용: PA12. 기차표 예매 프로그램을 작성하라, 간단한 구현을 위해 좌석은 모두 10개라고 한다,
               에매할 좌석수를 입력받아 빈 자리를 할당한다, 예매할 때마다 각 좌석의 상태를 출력한다,
               O이면 예매가능, X는 예매 불가를 의미한다, 더 이상 예매할 수없으면 프로그램을 종료한다

 * 작성자: 김영재

 * 날짜: 2025.05.30

 * 버전: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void Reservation(int arr[]);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[10] = {0};

    Reservation(arr);

    return;
}

void Reservation(int arr[])
{
    int i, j, k, r;

    for (i = 0;1;i++)
    {
        printf("현재 좌석: [ ");
        for (j = 0;j < 10;j++)
        {
            if (arr[j] == 1)
            {
                printf("X ");
            }
            else
                printf("O ");
        }
        printf("]\n");


        printf("예매할 좌석 수? ");
        scanf("%d", &r);


        for (j = 0; j < 10;j++)
        {
            if (arr[j] == 0 && r > 0)
            {
                arr[j] = 1;
                printf("%d ", j + 1);
                r--;
            }
        }
        printf("번 좌석을 예매했습니다\n");


        if (arr[9] == 1)
            break;
    }
}