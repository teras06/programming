/* 파일명: Assign0701.c

 * 내용: PA01. 등차수열은 앞에 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다 크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다. 
               첫 번째 항의 값과 공차(common difference)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오

 * 작성자: 김영재

 * 날짜: 2025.05.30

 * 버전: v1.0
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

    printf("첫 번째 항? ");
    scanf("%d", &a);
    printf("공차? ");
    scanf("%d", &d);

    fillcd(resurt, 10, a, d);

    printarray(resurt, 10);

    return;
}

void printarray(int arr[], int size)
{
    int i;

    printf("등차수열: ");

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

    printf("첫 번째 항? ");
    scanf("%d", &a);
    printf("공차? ");
    scanf("%d", &d);
    printf("프린트 개수? ");
    scanf("%d", &s);

    fillcd(resurt, s, a, d);

    printarray(resurt, s);

    return;
}

void printarray(int arr[], int size)
{
    int i;

    printf("등차수열: ");

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

   printf("초기값과 등차 입력");

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