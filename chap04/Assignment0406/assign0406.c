/* ���ϸ�: assign0406.c

 * ����: PA06. �� A�� ��ǥ(x1, y1)�� �� B�� ��ǥ(x2, y2)�� �Է¹޾� �� �� A, B�� ������ ������ ���⸦ ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.04.15

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	double lean, x1, x2, y1, y2;

	printf("�� ���� ��ǥ (x1, y1)? ");
	scanf("%lf %lf", &x1, &y1);
	printf("�� �ٸ� ���� ��ǥ (x2, y2)? ");
	scanf("%lf %lf", &x2, &y2);

	lean = (y2 - y1) / (x2 - x1);

	printf("������ ����: %.6lf", lean);

	return;
}