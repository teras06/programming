/* ���ϸ�: assign05.c

 * ����: PA05. �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �����Դ� �Ǽ��� �Է¹�����, �Ҽ��� ���� 2�ڸ������� ���

 * �ۼ���: �迵��

 * ��¥: 2025.3.31

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Weight(void);

int main()
{
	Weight();
	return 0;
}

void Weight(void)
{
	float wei;
	printf("������?");
	scanf("%f", &wei);

	printf("�Է��� �����Դ� %.2fKG�Դϴ�.", wei);

	return;
}