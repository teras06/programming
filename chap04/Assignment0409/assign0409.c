/* ���ϸ�: assign0409.c

 * ����: PA09. �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��϶�

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
	int hour,minute,second;

	printf("����ð�(��)? ");
	scanf("%d", &second);

	hour = second / 3600;

	minute = second % 3600 / 60;

	second = second % 3600 % 60;

	printf("����ð��� %d�ð� %d�� %d�� �Դϴ�.", hour,minute,second);
	return;
}