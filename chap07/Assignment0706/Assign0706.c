/* ���ϸ�: Assign0706.c

 * ����: PA06. ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷��� �ۼ��϶�
               �Ǽ��� �迭�� �ʱⰪ�� ������� ���Ͻÿ�

 * �ۼ���: �迵��

 * ��¥: 2025.05.30

 * ����: v1.0
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


    printf("�迭: ");
    for (int i = 0; i < size; i++)
    {
        printf("%.1lf ", arr[i]);
    }
    printf("\n");


    revers(arr, size);


    printf("����: ");
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