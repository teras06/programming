/* ���ϸ�: assign0618.c

 * ����: PA18. ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� divisors �Լ��� �ۼ��϶�
               0~999������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ� ������ ����� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.05.20

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int x);
void Print(void);

int main()
{
    srand(time(NULL));

    Print();
    return 0;
}

void Print()
{
    int i, x;

    for (i = 1;i < 4;i++)
    {
        int x = rand() % 1000;
        
        divisors(x);
    }

}

void divisors(int x)
{
    int i;
    int c = 0;
    

    printf("%d�� ���: ", x);
    
    for (i = 1; i <= x; i++) 
    {

        if (x % i == 0) {
            c++;
            printf("%d ", i);
        }
    }
    printf("=> �� %d��\n", c);
}
