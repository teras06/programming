/* ���ϸ�: assign0404.c

 * ����: PA04. ����� ������ ������ ������ ������ �Է¹޾� ����� �ۼ�Ʈ �󵵸� ���ϴ� ���α׷��� �ۼ��϶�
               ����� ������ ������ ������ g ������ �Է¹޴´�

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
	double mae, jil, nong;

	printf("���(g)? ");
	scanf("%lf", &mae);
	printf("����(g)? ");
	scanf("%lf", &jil);

	nong = (jil / (mae + jil)) * 100;

	printf("��: %.2lf %%", nong);
	return;
}