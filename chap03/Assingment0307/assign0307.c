/* ���ϸ�: assign0307.c

 * ����: PA07. �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷��� �ۼ��϶�
               �Ǽ����� �Է¹��� ���� 12.34ó�� �Ҽ� ǥ�� ����̳� 1.234e2ó�� ���� ǥ�� ����� �� �� ����� �� �ְ� �ϰ�
               ������ �������� ����� ���� ���� ǥ�� ������� ���

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
	double num;

	printf("�Ǽ�? ");
	scanf("%lf", &num);
	
	printf("����: %e\n", num * num);
	printf("������: %e", num * num * num);

	return;
}