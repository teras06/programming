/* ���ϸ�: assign0414.c

 * ����: PA14. �⺻ ��ݰ� �� ��뷮(kWh)�� �Է¹޾� ���� ����� ����ϴ� ���α׷��� �ۼ��϶�
               ��뷮�� ���� ����� 190��/hWh �̴�

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
	int n_charge, amount, e_charge;

	printf("�⺻ ���? ");
	scanf("%d", &n_charge);
	printf("�� ��뷮(kWh)? ");
	scanf("%d", &amount);

	e_charge = n_charge + amount * 190;

	printf("���� ���: %d", e_charge);

	return;
}