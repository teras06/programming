/* ���ϸ�: assign0517.c

 * ����: PA17. ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��϶� 
               ���� ����� ���� 30���� 2000��, �� ���Ĵ� 10�д� 1000�������� ����ϸ�, �Ϸ� �ִ� 25000���� ���� �� ����. 
               ���� �ð��� 24�ð��� ���� ���� ���ٰ� �����Ѵ�.

 * �ۼ���: �迵��

 * ��¥: 2025.04.28

 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print();

int main(void)
{
    Print();
    return 0;
}

void Print(void)
{
    int minute, charge;

    printf("���� �ð�(��)? ");
    scanf("%d", &minute);

    if (minute <= 30)
    {
        charge = 2000;
    }
    else
    {
        charge = 2000 + ((minute - 30 + 9) / 10) * 1000;
        if (charge > 25000)
            charge = 25000;
    }

    printf("���� ���: %d��\n", charge);

    return;
}
 
 
 /*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print();

int main(void)
{
    Print();
    return 0;
}

void Print(void)
{
    int minute , charge;

    printf("���� �ð�(��)? ");
    scanf("%d", &minute);

    if (minute <= 30)
    {
        printf("���� ���: 2000��");
    }
    if (minute > 30)
    { 
        charge = 2000 + ((minute - 30 + 9) / 10) * 1000;
        printf("���� ���: %d��", charge);
    }
    if (minute >= 260)
    {
        printf("���� ���: 25000��");
    }
    
}
*/

