/* 파일명: Assign1001.c

 * 내용: PA01. 

 * 작성자: 김영재

 * 날짜: 2025.06.06

 * 버전: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);


typedef struct login
{
	char id[21];
	char password[21];

} LOGIN;


int main()
{
	Print();
	return 0;
}

void Print(void)
{
	LOGIN name;

	printf("ID? ");
	scanf("%s", name.id);
	printf("Password? ");
	scanf("%s", name.password);

	printf("ID: %s\n", name.id);
	printf("PW: ");

	int i;
	for (i = 0;i < 20;i++)
	{
		if (name.password[i] == '\0')
			break;
		printf("*");
	}

	return;
}


