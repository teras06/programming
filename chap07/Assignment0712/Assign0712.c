/* ���ϸ�: Assign0712.c

 * ����: PA12. ����ǥ ���� ���α׷��� �ۼ��϶�, ������ ������ ���� �¼��� ��� 10����� �Ѵ�,
               ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�, ������ ������ �� �¼��� ���¸� ����Ѵ�,
               O�̸� ���Ű���, X�� ���� �Ұ��� �ǹ��Ѵ�, �� �̻� ������ �������� ���α׷��� �����Ѵ�

 * �ۼ���: �迵��

 * ��¥: 2025.05.30

 * ����: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void Reservation(int arr[]);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[10] = {0};

    Reservation(arr);

    return;
}

void Reservation(int arr[])
{
    int i, j, k, r;

    for (i = 0;1;i++)
    {
        printf("���� �¼�: [ ");
        for (j = 0;j < 10;j++)
        {
            if (arr[j] == 1)
            {
                printf("X ");
            }
            else
                printf("O ");
        }
        printf("]\n");


        printf("������ �¼� ��? ");
        scanf("%d", &r);


        for (j = 0; j < 10;j++)
        {
            if (arr[j] == 0 && r > 0)
            {
                arr[j] = 1;
                printf("%d ", j + 1);
                r--;
            }
        }
        printf("�� �¼��� �����߽��ϴ�\n");


        if (arr[9] == 1)
            break;
    }
}