/* ���ϸ�: assign0603.c

 * ����: PA01. ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� get_perimeter �Լ��� �ۼ��϶�
			   get_perimeter �Լ��� �̿��ؼ� �Է¹��� �� ���� ���̷� ���簢���� ���̸� ���ϴ� ���α׷��� �ۼ��϶� 

 * �ۼ���: �迵��

 * ��¥: 2025.05.22

 * ����: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
int get_perimeter(int a, int b);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int a, b;

	printf("����? ");
	scanf_s("%d", &a);
	printf("����? ");
	scanf_s("%d", &b);

	printf("���簢���� �ѷ�: %d", get_perimeter(a, b));
	return;
}

int get_perimeter(int a, int b)
{
	return (a + b) * 2;
}