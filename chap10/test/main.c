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
    CONTACT c1 = { "홍길동", "01012345678", MAN, 2005 };
    CONTACT c2 = { "홍길동", "01012345678", MAN, 2005 };
    CONTACT c3 = { "김길동", "01012345678", MAN, 2005 };

    Print(c1);
    Print_Ptr(&c3);

    int result1 = isEqualContact(c1, c2);
    int result2 = isEqualContact_Ptr(&c2, &c3);

    printf("c1과 c2는 %s\n", result1 ? "같습니다" : "다릅니다");
    printf("c2과 c3는 %s\n", result2 ? "같습니다" : "다릅니다");
}
