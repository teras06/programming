/* ���ϸ�: assign0304.c

 * ����: PA04. ��ü�� �ۿ��� ���� ũ��� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��ض�
               ���� ũ��� N ������ �Է¹ް�, �̵��� �Ÿ��� M ������ �Է¹޴´�

 * �ۼ���: �迵��

 * ��¥: 2025.04.07

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
	double power;
	double length;

	printf("��(N)? ");
	scanf("%lf", &power);
	printf("�̵��Ÿ�(M)? ");
	scanf("%lf", &length);

	printf("���� ��: %.2lf J", power * length);
	return;
}