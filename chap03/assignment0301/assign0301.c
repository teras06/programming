/* ���ϸ�: assign0301.c

 * ����: PA01.�� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��϶�

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
	int length;

	printf("�� ���� ����? ");
	scanf("%d", &length);

	printf("���簢���� ����: %d\n", length * length);
	printf("���簢���� �ѷ�: %d", length*4);

	return;
}