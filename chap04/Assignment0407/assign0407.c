/* ���ϸ�: assign0407.c

 * ����: PA07. ���� �ﰢ������ ������ �� �� �� a, b�� ���̸� �Է¹޾� ������ ���̸� ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.04.15

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
	double a, b, c;

	printf("�غ�? ");
	scanf("%lf", &a);
	printf("����? ");
	scanf("%lf", &b);

	c = sqrt((a * a) + (b * b));
	
	printf("������ ����: %.6lf", c);

	return;
}