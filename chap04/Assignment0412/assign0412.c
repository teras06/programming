/* ���ϸ�: assign0412.c

 * ����: PA12. ������̼� �ۿ��� �̵� �Ÿ��� ���� �ӷ����� ���� �����ð��� ���ϴ� ���α׷��� �ۼ��϶�
               �̵� �Ÿ��� Km ������, ���� �ӷ��� Km/h ������ �Է¹�����, �� �� �Ǽ��� �Է¹޴´�
               ���� �ҿ�ð��� �� ������ ����ϸ� ������ ����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.04.18

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
	double distance, speed;

	printf("�̵� �Ÿ�(km)? ");
	scanf("%lf", &distance);
	printf("���� �ӷ�(km/h)? ");
	scanf("%lf", &speed);

	int time = (int)((distance / speed) * 60);

	printf("�������� ���� �ҿ� �ð��� %d���Դϴ�.", time);

	return;
}