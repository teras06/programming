/* ���ϸ�: assign0501.c

 * ����: PA01. ���� ��ǥ�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷��� �ۼ��϶�
               ��ũ�� ���� ���� ������ ���簢�� ����� �������� ���簢���� �»������ ���ϴ����� ���ؼ� �����ȴ� 

 * �ۼ���: �迵��

 * ��¥: 2025.04.28

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main(void)
{
	Print();
	return 0;
}

void Print(void)
{
	int left, top, right, bottom, x, y;

	printf("���� ������ �»���� (left, top)? ");
	scanf("%d %d", &left, &top);
	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf("%d %d", &right, &bottom);
	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x >= left && x <= right && y >= top && y <= bottom)
	{
		printf("���� ���� ���� ���� ���Դϴ�.\n");
	}
	else if (x <= left && x >= right && y <= top && y >= bottom)
	{
		printf("���� ���� ���� ���� ���Դϴ�.\n");
	}
	else
	{
		printf("�Է°��� �ùٸ��� �ʽ��ϴ�.\n");
	}
	
	return;
}