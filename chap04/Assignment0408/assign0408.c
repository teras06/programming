/* ���ϸ�: assign0408.c

 * ����: PA08. �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��϶�
               �̶� ���̴� 3.141592��� �Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.04.15

 * ����: v1.0
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

    printf("�������� ����? ");
    scanf("%d", &radius);

    double v;
    v = (4.0/3.0) * pi * pow(radius, 3);

    printf("���� ���� : %lf", v);
    return;
}