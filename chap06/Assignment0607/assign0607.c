/* 파일명: assign0607.c

 * 내용: PA07. 소수(prime number)는 1과 자기 자신만으로 나누어지는 자연수이다 인자로 전달받은 정수가 소수인지 검사하는 is_prime 함수를 작성하라
               이 함수를 이용해서 1에서 N사이의 소수를 구해서 출력하고 모두 몇 개인지 출력하는 프로그램을 작성하라 
			   N은 사용자로부터 입력받는다

 * 작성자: 김영재

 * 날짜: 2025.05.10

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_prime(int N);
void Print(void);

int main()
{
	Print();
	return 0;
}

void Print()
{
	int N, c;
	
	printf("1~N사이의 소수를 구합니다. n은? ");
	scanf("%d", &N);

	c = is_prime(N);

	printf("소수는 모두 %d개 입니다", c);

	return;
}

int is_prime(int N)
{
	int i, j;
	int c = 0;
	
	int prime;

	for (i = 2; i <= N; i++)
	{
		prime = 1;

		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				prime = 0;
				break;
			}
		}

		if (prime == 1)
		{
			c++;
			printf("%d  ", i);
		}
	}

	printf("\n");
	return c;
}



/*

작성자:이승훈, 전기준, 임승리, 김영재

void is_prime(int N);

int main()
{
	int N;
	printf("1~N사이의 소수를 구합니다. n은? ");
	scanf("%d", &N);

	is_prime(N);

	return 0;
}

void is_prime(int N)
{
	int i, j, k, l;
	int a[1000] = { 0 }, b[1000] = { 0 };

	for (i = 3; i <= N; i += 2)
	{
		for (j = 3; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				a[i] = i;
				break;
			}
		}
	}
	나중에 고치기 
	for (k = 1; k < N; k++)
	{
		for (l = 1; l < N; l++)
		{
			if (b[k] != a[l])
			{
				b[k] = a[l];
				break;
			}
		}
	}
	for (int m = 0; m < N; m++)
	{
		printf("%d ", b[m]);
	}
	return;
}
*/