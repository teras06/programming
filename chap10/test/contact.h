//#pragma once
#ifndef _COTACT_H_129847575
#define _COTACT_H_129847575

enum gender { MAN, WOMAN };
typedef enum gender Egender;

struct contact
{
	char name[24];
	char phone[24];
	Egender gender;
	int year;

};

typedef struct contact CONTACT;


int isEqualContact(CONTACT a, CONTACT b); // 자동 전방선언
void Print(CONTACT ct);
int isEqualContact_Ptr(const CONTACT* a, const CONTACT* b);
void Print_Ptr(const CONTACT* ct);


#endif // _COTACT_H_129847575