/* ���ϸ�: assign0602.c

 * ����: PA02. �� ���� ���̸� �Ű������� ���޹޾� ���簢���� ���̸� ���ϴ� get_area_of_square �Լ��� �ۼ��϶�
               get_area_of_square �Լ��� �̿��ؼ� �Է¹��� �� ���� ���̷� ���簢���� ���̸� ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.05.21

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void get_area_of_square(double a);

int main()
{
	Print();
	return 0;
}

void Print()
{
	double a;

	printf("�� ���� ����? ");
	scanf("%lf", &a);

	get_area_of_square(a);
}

void get_area_of_square(double a)
{
	double x = a * a;
	printf("���簢���� ����: %f", x);
}