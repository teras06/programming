/* ���ϸ�: assign11.c

 * ����: PA11. ������ ���� ���� 3.14159265��� �� ��, ���� ���� ���� ���� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
			   �Ҽ��� ���� 2�ڸ�����, �Ҽ��� ���� 6�ڸ�����, �Ҽ��� ���� 8�ڸ����� ���� ����ϰ�, ���� ǥ��ε� ���

 * �ۼ���: �迵��

 * ��¥: 2025.3.31

 * ����: v1.1

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
	double pi;

	pi = 3.14159265;

	printf("pi = %.2lf\n", pi);
	printf("pi = %.4lf\n", pi);
	printf("pi = %.6lf\n", pi);
	printf("pi = %.8lf\n", pi);
	printf("pi = %e", pi);

	return;
}


//�� double�� ���� float���� ���������� �����°� ����


/*void Print(void)
{
	float pi;

	pi = 3.14159265;

	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi); < ������ �ȳ���
	printf("pi = %e", pi);

	return;
}
*/