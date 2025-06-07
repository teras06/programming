/* 파일명: Assign1013.c

 * 내용: PA13. 직사각형 정보를 나타내는 RECT 구조체를 정의하라 
               직사각형은 좌하단점과 우상단점으로 구성되며 점의 좌표는 POINT 구조체를 이용해서 나타낸다 
               직사각형 정보를 출력하는 print_rect 함수를 정의하고, RECT 구조체 변수를 선언해서 
               직사각형 정보를 입력받고 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.06.06

 * 버전: v1.0
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

    printf("직사각형의 좌하단점(x,y)? ");
    scanf("%d %d", &a.left.x, &a.left.y);
    printf("직사각형의 우상단점(x,y)? ");
    scanf("%d %d", &a.right.x, &a.right.y);

    print_rect(a);

    return;
}

void print_rect(RECT a)
{
    printf("[RECT 좌하단점: (%d, %d) 우상단점: (%d, %d)]\n", a.left.x, a.left.y, a.right.x, a.right.y);
}
