/* 파일명: assign0501.c

 * 내용: PA01. 점의 좌표를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작성하라
               스크린 상의 선택 영역은 직사각형 모양의 영역으로 직사각형의 좌상단점과 우하단점에 의해서 결정된다 

 * 작성자: 김영재

 * 날짜: 2025.04.28

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main(void)
{
	Print();
	return 0;
}

void Print(void)
{
	int left, top, right, bottom, x, y;

	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf("%d %d", &left, &top);
	printf("선택 영역의 우하단점 (right, bottom)? ");
	scanf("%d %d", &right, &bottom);
	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x >= left && x <= right && y >= top && y <= bottom)
	{
		printf("점은 선택 영역 내의 점입니다.\n");
	}
	else if (x <= left && x >= right && y <= top && y >= bottom)
	{
		printf("점은 선택 영역 밖의 점입니다.\n");
	}
	else
	{
		printf("입력값이 올바르지 않습니다.\n");
	}
	
	return;
}