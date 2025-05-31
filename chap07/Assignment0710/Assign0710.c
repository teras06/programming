/* 파일명: Assign0710.c

 * 내용: PA10. 3 x 3 행렬의 합을 구하는 프로그램을 작성하라 
               행렬로 사용될 2차원 배열은 마음대로 초기화해도 된다

 * 작성자: 김영재

 * 날짜: 2025.05.30

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 3

void Print(void);
void add_arr(int arr1[ROW][COL], int arr2[ROW][COL]);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int i, j;
    int arr1[ROW][COL] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int arr2[ROW][COL] = { {10,20,30}, {40,50,60}, {70,80,90} };
    int size = sizeof(arr1) / sizeof(arr1[0][0]);


    printf("x 행렬:\n");
    for (i = 0;i < ROW;i++)
    {
        for (j = 0;j < COL;j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }


    printf("y 행렬:\n");
    for (i = 0;i < ROW;i++)
    {
        for (j = 0;j < COL;j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }


    printf("x + y 행렬:\n");
    add_arr(arr1 ,arr2);

    return;
}

void add_arr(int arr1[ROW][COL], int arr2[ROW][COL])
{
    int i, j;
    int arr3[ROW][COL];

    for (i = 0;i < ROW;i++)
    {
        for (j = 0;j < COL;j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}