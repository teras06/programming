/* ���ϸ�: assign0302.c

 * ����: PA02. ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��ض�

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
	int width;
	int length;

	printf("������ ����? ");
	scanf("%d", &width);
	printf("������ ����? ");
	scanf("%d", &length);

	printf("���簢���� ����: %d\n", length * width);
	printf("���簢���� �ѷ�: %d", length * 2 + width * 2);

	return;
}