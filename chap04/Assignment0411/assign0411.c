/* ���ϸ�: assign0411.c

 * ����: PA11. ��ǰ�� ���ݰ� ������(%)�� �Է¹޾Ƽ� ���ΰ��� ������ �ݾ��� ����ϴ� ���α׷��� �ۼ��϶�

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
	int price;
	double discount;

	printf("��ǰ�� ����? ");
	scanf("%d", &price);
	printf("������(%%)? ");
	scanf("%lf", &discount);

	int enuri = price * discount / 100;
	int discount_price = price - enuri;

	printf("���ΰ�: %d(%d ����)", discount_price, enuri);

	return;
}