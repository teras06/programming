/* ���ϸ�: assign0605.c

 * ����: PA05. ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even �Լ��� ������� �˻��ϴ� is_odd �Լ��� �ۼ��϶� 
               �� �Լ��� �̿��ؼ� 0�� �Էµ� ������ �Էµ� �����鿡 ���ؼ� ¦���� ������ Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.05.15

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void is_even(int a);
void in_oss(int b);

int even = 0;
int oss = 0;

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int i;
	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");

	while (1)
	{
		int x;
		scanf("%d", &x);

		if (x == 0)
			break;

		is_even(x);
		in_oss(x);
	}
	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d�� �Դϴ�.", even, oss);
}

void is_even(int a)
{
	if (a % 2 == 0)
	{
		even = even + 1;
	}
}


void in_oss(int b)
{
	if (b % 2 == 1)
	{
		oss = oss + 1;
	}
}