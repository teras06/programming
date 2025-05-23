/* ���ϸ�: assign0608.c

 * ����: PA08. RGB �������κ��� red, green, blue ���� ���� �����ϴ� get_red, get_green, get_blue �Լ��� �����϶�
               �� �Լ����� �̿��ؼ� �Է¹��� RGB ������ red, green, blue ���� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.05.20

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(unsigned int r);
int get_green(unsigned int g);
int get_blue(unsigned int b);
void Print(void);


int main()
{
	Print();
	return 0;
}

void Print()
{
	unsigned int x;

	printf("RGB ����? ");
	scanf("%x", &x);

	printf("RGB %06x�� red: %d , green: %d ,blue: %d", x, get_red(x), get_green(x), get_blue(x));

	return;
}


int get_red(unsigned int r)
{
	unsigned int red;
	red = r >> 16;

	return red;
}

int get_green(unsigned int g)
{
	unsigned int green;
	green = g << 16;
	green = green >> 24;

	return green;
}

int get_blue(unsigned int b)
{
	unsigned int blue;
	blue = b << 24;
	blue = blue >> 24;

	return blue;
}

