#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "contact.h"


//isEqualContact()
// 반환값 : 만약 같으면 1 반환 , 그렇지 않으면 0 반환
// 입력 : 비교할 두 Comtact 값

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
    printf("이름: %s \n", ct.name);
    printf("전번: %s \n", ct.phone);
    printf("성별: %s \n", ct.gender == MAN ? "남자" : "여자");
    printf("날짜: %d \n", ct.year);
}

//포인터로 받기
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
    printf("이름: %s \n", ct->name);
    printf("전번: %s \n", ct->phone);
    printf("성별: %s \n", ct->gender == MAN ? "남자" : "여자");
    printf("날짜: %d \n", ct->year);
}