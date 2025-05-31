/* 파일명: Assign0706.c

 * 내용: PA06. 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하라
               실수형 배열의 초기값은 마음대로 정하시오

 * 작성자: 김영재

 * 날짜: 2025.05.30

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void revers(double arr[], int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    double arr[5] = { 2.3 , 4.7 , 8.9 , 5.1 , 6.7 };
    int size = sizeof(arr) / sizeof(arr[0]);


    printf("배열: ");
    for (int i = 0; i < size; i++)
    {
        printf("%.1lf ", arr[i]);
    }
    printf("\n");


    revers(arr, size);


    printf("역순: ");
    for (int i = 0; i < size; i++)
    {
        printf("%.1lf ", arr[i]);
    }

    return;
}

void revers(double arr[], int size)
{
    int i;
    double temp;

    for (i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}