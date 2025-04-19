/* ���ϸ�: assign0415.c

 * ����: PA16. ��ǻ�� �ý��ۿ��� ������ ǥ���ϴ� ��� �߿� RGB ǥ����� red, green, blue�� 8��Ʈ���� ����ؼ� ������ ǥ���ϹǷ� 
               24��Ʈ Ʈ���÷���� �Ѵ�. ��ǻ�� �ý��ۿ����� 32��Ʈ �������� ������ ����Ʈ���� red, green, blue�� ������ ���� ������ 
               �����ϰ� �ֻ��� ����Ʈ�� ������� �ʰ� 0���� ä���. 0~255������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� 
               RGB ������ ���� ����ϴ� ���α׷��� �ۼ��϶�. 
               RGB ������ ����� ���� ����Ʈ ������ ���� �˾ƺ��� ������ 16������ ����Ѵ�.

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
    unsigned char red, green, blue;
    unsigned int x,y,z,color;

    printf("red? ");
    scanf("%d", &red);
    x = red;
    printf("green? ");
    scanf("%d", &green);
    y = green << 8;
    printf("blue? ");
    scanf("%d", &blue);
    z = blue << 16;

    color = x + y + z;

    printf("RGB Ʈ���÷�: %06X", color);
    
    return;
}