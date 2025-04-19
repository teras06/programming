/* ���ϸ�: assignment0401.c

 * ����: PA01. ������ �ӷ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��϶�
               ������ kg ����, �ӷ��� m/s ������ �Է¹޴´�
			   
 * �ۼ���: �迵��

 * ��¥: 2025.04.07

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getMotionEnergy(double weight, double velocity);
int assignment0401(void);

int main(void)
{
	int r = assignment0401();
	return r;
}

/*
  �Լ��� : assignment0401()
  ���(å��) : ����, �ӷ� �Է¹���, ��������� ����ϵ��� �Լ� ȣ��, �� ����� �ֿܼ� ���
  �Է� : ����
  ��ȯ : �����̸� 0�̸� ���� , �׿� ���� �����̴�.
  */

int assignment0401(void)
{
	// 1. ���� , �ӵ��� �Է� �޾� ����
	double weight = 0.0; // ���� kg
	double velocity = 0.0; // �ӷ� m/s
	printf("���� �ӵ��� �Է����ּ��� : ");
	scanf("%lf %lf", &weight, &velocity);

	// 2. ������� ���
	double result = getMotionEnergy(weight, velocity);
	
	// 3. ���� ������� ���
	printf("����=%.2f kg, �ӷ� %.2f m/s �� ��������� %.2f J �Դϴ�.", weight, velocity, result);

	return 0;
}

/*
  �Լ��� : getMotionEnergy()
  ���(å��) : ����, �ӷ� �Է¹޾� ��������� ����Ͽ� ��ȯ
  �Է� : ����(kg) , �ӷ�(m/s)
  ��ȯ : �������
  */

double getMotionEnergy(double weight, double velocity)
{
	double energy = 0.0;

	energy = 1.0 / 2.0 * weight * velocity * velocity;

	return energy;

}