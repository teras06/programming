/* ���ϸ�: assign0306.c

 * ����: PA06. ����Ʈ�� ������ ��������(m^2)�� �Է¹޾� �� ������ �ۼ��ϴ� ���α׷��� �ۼ��϶�
               ���α׷��� �ۼ��� �� �̸� �ִ� ����� �̿�

 * �ۼ���: �迵��

 * ��¥: 2025.04.07

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#define Pyeong 0.3025
#include <stdio.h>

void apt(void);

int main()
{
	apt();
	return 0;
}

void apt(void)
{
	double area;
	double square;

	printf("����Ʈ�� ����(��������) ? ");
	scanf("%lf", &square);

	area = Pyeong * square;

	printf("%.2lf �������� = %.2lf ��", square, area);
	return;
}