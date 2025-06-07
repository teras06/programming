#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contact.h"

void testContact();

int main()
{
    testContact();

    return 0;
}


void testContact()
{
    CONTACT c1 = { "ȫ�浿", "01012345678", MAN, 2005 };
    CONTACT c2 = { "ȫ�浿", "01012345678", MAN, 2005 };
    CONTACT c3 = { "��浿", "01012345678", MAN, 2005 };

    Print(c1);
    Print_Ptr(&c3);

    int result1 = isEqualContact(c1, c2);
    int result2 = isEqualContact_Ptr(&c2, &c3);

    printf("c1�� c2�� %s\n", result1 ? "�����ϴ�" : "�ٸ��ϴ�");
    printf("c2�� c3�� %s\n", result2 ? "�����ϴ�" : "�ٸ��ϴ�");
}
