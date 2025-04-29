/* ���ϸ�: assign0509.c

 * ����: PA09. �ܹ��� ������ ��꼭 ���α׷��� �ۼ��϶� �ܹ��Ŵ� 4000��, �ݶ�� 1500��, ����Ƣ���� 2000���̰�, 
               �� ������ ��Ʈ�� �ֹ��ϸ� 6500���̶�� ����. �ܹ���, �ݶ�, ����Ƣ���� ������ �Է¹޾Ƽ� �ִ��� ��Ʈ�� �����ϰ� 
               �������� ��ǰ���� ����ϵ��� �Ѵ�. ���� ��� �ܹ��� 2, �� �� 1, ����Ƣ�� 3�� �ֹ��ϸ� 
               ����� ��Ʈ 1, �ܹ��� 1, ����Ƣ�� 2�� �ؾ� �Ѵ�.

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
    int ham, fry, cora, set, total;

    printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");
    printf("�ܹ��� ����? ");
    scanf("%d", &ham);
    printf("����Ƣ�� ����? ");
    scanf("%d", &fry);
    printf("�ݶ� ����? ");
    scanf("%d", &cora);

    set = ham;
    if (fry < set) set = fry;
    if (cora < set) set = cora;

    ham -= set;
    fry -= set;
    cora -= set;

    total = set * 6500 + ham * 4000 + fry * 2000 + cora * 1500;


    printf("��ǰ��       �ܰ�    ����    �ݾ�\n");
    if (set > 0) {
        printf("��Ʈ         6500     %d     %d\n", set, set * 6500);
    }
    if (ham > 0) {
        printf("�ܹ���       4000     %d     %d\n", ham, ham * 4000);
    }
    if (fry > 0) {
        printf("����Ƣ��     2000     %d     %d\n", fry, fry * 2000);
    }
    if (cora > 0) {
        printf("�ݶ�       1500     %d     %d\n", cora, cora * 6500);
    }
    printf("--------------------------------\n");
    printf("�հ�                        %d", total);


    return;
}