/* ���ϸ�: assign0601.c

 * ����: PA01. ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� get_perimeter �Լ��� �ۼ��϶� 

 * �ۼ���: �迵��

 * ��¥: 2025.05.15

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

void Print()
{
	int x, y;

	printf("����? ");
	scanf("%d", &x);
	printf("����? ");
	scanf("%d", &y);

	printf("���簢���� �ѷ�: %d", get_perimeter(x,y));

	return;
}

int get_perimeter(int a, int b)
{
	int length;

	length = a * 2 + b * 2;
	
	return length;
}