/* ���ϸ�: assign0403.c

 * ����: PA03. ������ ���Ǹ� �Ǽ��� �Է¹޾� �е��� ���ϴ� ���α׷��� �ۼ��϶�
               ������ g ������ �Է¹ް�, ���Ǵ� cm^3 ������ �Է¹޴´�

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
	int weight, volume;

	printf("����(g)? ");
	scanf("%d", &weight);
	printf("����(��������Ƽ����)? ");
	scanf("%d", &volume);

	double density = (double)weight / (double)volume;

	printf("�е�: %06lf", density);

	return;
}