/* ���ϸ�: assign0607.c

 * ����: PA07. �Ҽ�(prime number)�� 1�� �ڱ� �ڽŸ����� ���������� �ڿ����̴� ���ڷ� ���޹��� ������ �Ҽ����� �˻��ϴ� is_prime �Լ��� �ۼ��϶�
               �� �Լ��� �̿��ؼ� 1���� N������ �Ҽ��� ���ؼ� ����ϰ� ��� �� ������ ����ϴ� ���α׷��� �ۼ��϶� 
			   N�� ����ڷκ��� �Է¹޴´�

 * �ۼ���: �迵��

 * ��¥: 2025.05.10

 * ����: v1.0
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
	
	printf("1~N������ �Ҽ��� ���մϴ�. n��? ");
	scanf("%d", &N);

	c = is_prime(N);

	printf("�Ҽ��� ��� %d�� �Դϴ�", c);

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

�ۼ���:�̽���, ������, �ӽ¸�, �迵��

void is_prime(int N);

int main()
{
	int N;
	printf("1~N������ �Ҽ��� ���մϴ�. n��? ");
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
	���߿� ��ġ�� 
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