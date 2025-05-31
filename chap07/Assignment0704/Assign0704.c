/* 파일명: Assign0704.c

 * 내용: PA04. 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최댓값을 가진 원소와 최솟값을 가진 원소를 찾아서 
               인덱스와 값을 함께 출력하는 프로그램을 작성하라
               배열의 초기값은 마음대로 정하라

 * 작성자: 김영재

 * 날짜: 2025.05.30

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void max_arr(int arr[], int size);
void min_arr(int arr[], int size);

int max, min;
int max_in, min_in;

int main()
{
    Print();
    return 0;
}

void Print()
{
    int arr[10] = { 14 ,62 ,81 ,99 ,42 ,31 ,41 ,59 ,70, 38 };
    int size = sizeof(arr) / sizeof(arr[0]);


    printf("배열: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    max_arr(arr, size);
    min_arr(arr, size);


    printf("최댓값: 인덱스=%d, 값=%d\n", max_in, max);
    printf("최소값: 인덱스=%d, 값=%d", min_in, min);

}

void max_arr(int arr[], int size)
{
    int i;
    max = arr[0];
    max_in = 0;

    for (i = 1;i < size;i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_in = i;
        }
    }
}

void min_arr(int arr[], int size)
{
    int i;
    min = arr[0];
    min_in = 0;

    for (i = 1;i < size;i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_in = i;
        }
    }
}
