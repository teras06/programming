/* ���ϸ�: assign0402.c

 * ����: PA02. ȭ�� �µ�(��F)�� �Է¹޾� ���� �µ�(��C)�� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.04.15

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void tem(void);

int main(void)
{
	tem();
	return 0;
}

void tem(void)
{
	double Ftem, Ctem;

	printf("ȭ���µ�?");
	scanf("%lf", &Ftem);

	Ctem = (Ftem - 32) * (5 / 9);

	printf("%.2lf F = %.2lf C", Ftem, Ctem);
	return;
}

