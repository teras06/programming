/* ���ϸ�: assign0405.c

 * ����: PA05. �������� ���̸� �Է¹޾� ������� ���Ǹ� ���ϴ� ���α׷��� �ۼ��϶�
               �̋� ���̴� 3.141592��� �Ѵ� 

 * �ۼ���: �迵��

 * ��¥: 2025.04.15

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#define pi 3.141592
#include <stdio.h>

void Print(void);

int main()
{
	Print();
	return 0;
}


void Print(void)
{
	int r, h;

	printf("�������� ����? ");
	scanf("%d", &r);
	printf("����? ");
	scanf("%d", &h);

	double volume = pi * r * r * h;

	printf("������� ����: %.6lf", volume);
}