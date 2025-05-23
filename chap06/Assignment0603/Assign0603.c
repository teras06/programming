/* 파일명: assign0603.c

 * 내용: PA03. 두 점 사이의 직선 거리를 구하는 distance 함수를 작성하라
               distance 함수를 이용해서 입력받은 시작점부터 끝점 사이의 직선 거리를 구하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.05.15

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Print(void);
double distancee(int a, int b, int c, int d);

int main()
{
	Print();
	return 0;
}

void Print()
{
	int x1, x2, y1, y2;

	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &x1, &y1);
	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &x2, &y2);

	printf("(%d, %d)~(%d, %d) 직선의 길이: %lf", x1, y1, x2, y2, distancee(x1, x2, y1, y2));
	
	return;
}

double distancee(int a, int b, int c, int d)
{
	int e = pow(a - b, 2);
	int f = pow(c - d, 2);
	double g = sqrt(e + f);

	return g;
}
