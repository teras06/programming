/* ���ϸ�: assign0603.c

 * ����: PA03. �� �� ������ ���� �Ÿ��� ���ϴ� distance �Լ��� �ۼ��϶�
               distance �Լ��� �̿��ؼ� �Է¹��� ���������� ���� ������ ���� �Ÿ��� ���ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.05.15

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Print(void);
double distancee(int a, int b, int c, int d);

int main()
{
	Print();
	return 0;
}

void Print()
{
	int x1, x2, y1, y2;

	printf("������ ������ ��ǥ? ");
	scanf("%d %d", &x1, &y1);
	printf("������ ���� ��ǥ? ");
	scanf("%d %d", &x2, &y2);

	printf("(%d, %d)~(%d, %d) ������ ����: %lf", x1, y1, x2, y2, distancee(x1, x2, y1, y2));
	
	return;
}

double distancee(int a, int b, int c, int d)
{
	int e = pow(a - b, 2);
	int f = pow(c - d, 2);
	double g = sqrt(e + f);

	return g;
}
