/* ���ϸ�: assign0508.c

 * ����: PA08. ��Ʈ ������ �����ϴ� ���⸦ ���α׷��϶� 
               &�� ��Ʈ AND, I�� ��Ʈ OR, ^�� ��Ʈ XOR ������ ó���Ѵ� "0xAB & 0xCC"ó�� ������� �Է��ؼ� ���� ����� ���Ѵ�
               ��Ʈ �����̹Ƿ� ������� �Է¹��� �� 10����, 8����, 16������ ����� �� �ְ� �ϰ�, ������ ����� 16������ ����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.04.28

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print();

int main(void)
{
    Print();
    return 0;
}

void Print(void)
{
    int x, y;
    char unit;

    printf("��Ʈ ����� ");
    scanf("%i %c %i", &x, &unit, &y);

    switch (unit)
    {
    case '&':
        printf("%x & %x = %x ", x, y, x & y);
        break;
    case '|':
        printf("%x | %x = %x ", x, y, x | y);
        break;
    case '^':
        printf("%x ^ %x = %x ", x, y, x ^ y);
        break;
    }

    return;
}