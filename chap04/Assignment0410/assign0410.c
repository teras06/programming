/* ���ϸ�: assign0410.c

 * ����: PA10. �װ��� ���� �� ������ �� �ҿ�ð��� �ð� ������ �Է¹޾� ��ĥ �� �ð� �� ������ ����ϴ� ���α׷��� �ۼ��϶�
               �� �ҿ�ð��� �Ǽ��� �Է¹޴´�

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
	double hour_fly;
	int day, hour, minute_all , minute;

	printf("���� �ҿ�ð�(�ð�)? ");
	scanf("%lf", &hour_fly);

	minute_all = (int)(hour_fly * 60);

	day = minute_all / (24 * 60);

	hour = (minute_all % (24 * 60)) / 60;

	minute = minute_all % 60;

	printf("���� �ҿ�ð��� %d�� %d�ð� %d�� �Դϴ�.", day, hour, minute);
	return;
}

