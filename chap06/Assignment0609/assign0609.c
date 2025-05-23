/* ���ϸ�: assign0609.c

 * ����: PA09. red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� make_rgb �Լ��� �����϶�
               �տ��� ������ get_red, get_green, get_blue �Լ��� �Ա� �̿��ؼ� �Է¹��� RGB ������ ������ ���ؼ� �����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.05.20

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(unsigned int r);
int get_green(unsigned int g);
int get_blue(unsigned int b);
int make_rgb(int r, int g, int b);
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

	printf("RGB %06x�� ����: %06x", x, make_rgb(get_red(x), get_green(x), get_blue(x)));

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

int make_rgb(int r, int g, int b)
{
	unsigned int rgb = (r << 16) + (g << 8) + b;
	return ~rgb & 0xFFFFFF;
}
