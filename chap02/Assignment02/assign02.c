/* ���ϸ�: assign02.c

 * ����: PA02. �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �л��� ��ȣ�� ������,������ �Ǽ��� �Է�

 * �ۼ���: �迵��

 * ��¥: 2025.3.31

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Credit(void);

int main()
{
	Credit();
	return 0;
}

void Credit(void)
{
	int number;
	float credit;

	printf("��ȣ?");
	scanf("%d", &number);

	printf("����?");
	scanf("%f", &credit);

	printf("%d�� �л��� ������ %.6f�Դϴ�" ,number ,credit);

	return;
}