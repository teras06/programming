/* ���ϸ�: assign0303.c

 * ����: PA03. ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��ض�
               ������ kg ����, ���̴� m ������ �Է�

 * �ۼ���: �迵��

 * ��¥: 2025.04.07

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#define G 9.8
#include<stdio.h>

void assignment0303(void);
double calcPositionEnergy(int weight, int height);

int main()
{
	assignment0303();
	return 0;
}

void assignment0303(void)
{
	float weight, height;
	printf("����(kg)? ");
	scanf(" %f", &weight);
	printf("����(m)? ");
	scanf("%f", &height);

	calcPositionEnergy(weight, height);
	printf("��ġ������: %f J", calcPositionEnergy(weight, height));

	return;
}

double calcPositionEnergy(int weight, int height)
{
	return weight * height * G;
}