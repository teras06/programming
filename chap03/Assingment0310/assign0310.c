/* ���ϸ�: assign0310.c

 * ����: PA10. ��/�޷� ȯ���� ��ȭ�� �Է¹޾� �� �޷����� ����ϴ� ���α׷��� �ۼ�

 * �ۼ���: �迵��

 * ��¥: 2025.04.07

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
	int kor;
	double rate;


	printf("KRW? ");
	scanf("%d", &kor);
	printf("��/�޷� ȯ��? ");
	scanf("%lf", &rate);

	printf("KRW %d = USD %.2lf", kor, kor / rate);
	
	return;
}