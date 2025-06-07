/* ���ϸ�: Assign1013.c

 * ����: PA13. ���簢�� ������ ��Ÿ���� RECT ����ü�� �����϶� 
               ���簢���� ���ϴ����� ���������� �����Ǹ� ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ���� 
               ���簢�� ������ ����ϴ� print_rect �Լ��� �����ϰ�, RECT ����ü ������ �����ؼ� 
               ���簢�� ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.06.06

 * ����: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct POINT
{
    int x;
    int y;

} POINT;


typedef struct rect
{
    POINT left;
    POINT right;

} RECT;


void print_rect(RECT a);
void Print(void);


int main()
{
    Print();
    return 0;
}

void Print(void)
{
    RECT a;

    printf("���簢���� ���ϴ���(x,y)? ");
    scanf("%d %d", &a.left.x, &a.left.y);
    printf("���簢���� ������(x,y)? ");
    scanf("%d %d", &a.right.x, &a.right.y);

    print_rect(a);

    return;
}

void print_rect(RECT a)
{
    printf("[RECT ���ϴ���: (%d, %d) ������: (%d, %d)]\n", a.left.x, a.left.y, a.right.x, a.right.y);
}
