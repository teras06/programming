/* ���ϸ�: Assign0701.c

 * ����: PA01. ���������� �տ� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴� ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�. 
               ù ��° ���� ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

 * �ۼ���: �迵��

 * ��¥: 2025.05.30

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 10
#include <stdio.h>

void Print(void);
int fillcd(int arr[], int size, int start, int diff);
void printarray(int arr[], int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int resurt[10] = { 0 };
    int a, d;

    printf("ù ��° ��? ");
    scanf("%d", &a);
    printf("����? ");
    scanf("%d", &d);

    fillcd(resurt, 10, a, d);

    printarray(resurt, 10);

    return;
}

void printarray(int arr[], int size)
{
    int i;

    printf("��������: ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int fillcd(int arr[], int size, int start, int diff)
{
    int i;

    for (i = 0; i < size; i++)
    {
        arr[i] = start + i * diff;
    }
}

/*#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 10
#include <stdio.h>

void Print(void);
int fillcd(int arr[], int size, int start, int diff);
void printarray(int arr[], int size);

int main()
{
    Print();
    return;
}

void Print(void)
{
    int resurt[10] = { 0 };
    int a, d, s;

    printf("ù ��° ��? ");
    scanf("%d", &a);
    printf("����? ");
    scanf("%d", &d);
    printf("����Ʈ ����? ");
    scanf("%d", &s);

    fillcd(resurt, s, a, d);

    printarray(resurt, s);

    return;
}

void printarray(int arr[], int size)
{
    int i;

    printf("��������: ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int fillcd(int arr[], int size, int start, int diff)
{
    int i;

    for (i = 0; i < size; i++)
    {
        arr[i] = start + i * diff;
    }
}




#define ARR_SIZE 10
#include <stdio.h>

void printarray();
void fillcd(int arr[], int size, int start, int diff);]
void Assignment0701(void);


int main()
{
   return Assignment0701();
}

void Assignment0701(void)
{
   int resurt[10] = { 0 };

   int start = 0;
   int diff = 0;

   printf("�ʱⰪ�� ���� �Է�");

   scanf("%d %d", &start, &diff);

   fillcd(resurt, ARR_SIZE, start, diff);

   printarray(resurt, ARR_SIZE);

   return 0;
}


void printarray(int arr[], int size)
{
   int i = 0;
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}

void fillcd(int arr[], int size, int start, int diff)
{
   int i;

   arr[0] = start;

   for (i = 0; i < size; i++);
   {
      arr[i] = arr[i - 1] + diff;
   }
}

*/