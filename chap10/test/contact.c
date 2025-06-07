#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "contact.h"


//isEqualContact()
// ��ȯ�� : ���� ������ 1 ��ȯ , �׷��� ������ 0 ��ȯ
// �Է� : ���� �� Comtact ��

int isEqualContact(CONTACT a, CONTACT b)
{
    if (a.year == b.year && a.gender == b.gender &&
        strcmp(a.name, b.name) == 0 && strcmp(a.phone, b.phone) == 0)
    {
        return 1;
    }

    return 0;
}

void Print(CONTACT ct)
{
    printf("�̸�: %s \n", ct.name);
    printf("����: %s \n", ct.phone);
    printf("����: %s \n", ct.gender == MAN ? "����" : "����");
    printf("��¥: %d \n", ct.year);
}

//�����ͷ� �ޱ�
int isEqualContact_Ptr(const CONTACT* a, const CONTACT* b)
{
    if (a->year == b->year && a->gender == b->gender &&
        strcmp(a->name, b->name) == 0 && strcmp(a->phone, b->phone) == 0)
    {
        return 1;
    }

    return 0;
}

void Print_Ptr(const CONTACT* ct)
{
    printf("�̸�: %s \n", ct->name);
    printf("����: %s \n", ct->phone);
    printf("����: %s \n", ct->gender == MAN ? "����" : "����");
    printf("��¥: %d \n", ct->year);
}