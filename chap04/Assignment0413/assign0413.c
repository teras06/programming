/* ���ϸ�: assign0413.c

 * ����: PA13. �� A�� ��ǥ(x1, y1)�� �� B�� ��ǥ(x2, y2)�� �Է¹޾� �� �� A, B�� ������ ������ ���⸦ ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.04.18

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
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
	double x1, x2, y1, y2;

	printf("������ ������ (x1, y1)? ");
	scanf("%lf %lf", &x1, &y1);
	printf("������ ���� (x2, y2)? ");
	scanf("%lf %lf", &x2, &y2);

	double length = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));

	printf("������ ����: %.06lf", length);

	return;
}