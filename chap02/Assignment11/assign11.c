/* 파일명: assign11.c

 * 내용: PA11. 원주율 파이 값이 3.14159265라고 할 때, 파이 값을 여러 가지 방법으로 출력하는 프로그램을 작성하시오.
			   소수점 이하 2자리까지, 소수점 이하 6자리까지, 소수점 이하 8자리까지 각각 출력하고, 지수 표기로도 출력

 * 작성자: 김영재

 * 날짜: 2025.3.31

 * 버전: v1.1

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
	double pi;

	pi = 3.14159265;

	printf("pi = %.2lf\n", pi);
	printf("pi = %.4lf\n", pi);
	printf("pi = %.6lf\n", pi);
	printf("pi = %.8lf\n", pi);
	printf("pi = %e", pi);

	return;
}


//왜 double를 쓰면 float보다 정상적으로 나오는가 질문


/*void Print(void)
{
	float pi;

	pi = 3.14159265;

	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi); < 정답이 안나옴
	printf("pi = %e", pi);

	return;
}
*/