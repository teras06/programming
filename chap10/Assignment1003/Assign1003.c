/* 파일명: Assign1003.c

 * 내용: PA03. LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하라
               아이디를 입력받아서 LOGIN 구조체 배열에서 아이디를 찾은 다음 입력받은 패스워드와 등록된 패스워드를 비교해서 
			   같으면 "로그인 성공"이라고 출력한다 LOGIN 구조체 배열은 크기가 5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다


 * 작성자: 김영재

 * 날짜: 2025.06.06

 * 버전: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

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
	int i;

	LOGIN account[5] = { {"guest" , "idontknow"},{"guest2" , "idontknow"} ,
					   {"guest3" , "idontknow"} ,{"guest4" , "idontknow"} ,{"guest5" , "idontknow"} };

	LOGIN name;

	while (1)
	{
		printf("ID? ");
		scanf("%s", name.id);

		if (strcmp(name.id , ".") == 0)
		{
			break;
		}

		printf("Password? ");
		scanf("%s", name.password);

		for (i = 0; i < 5; i++)
		{
			if (strcmp(account[i].id, name.id) == 0 && strcmp(account[i].password, name.password) == 0) 
			{
				printf("로그인 성공\n");
			}
			else 
			{
				continue;
			}

			break;
		}

	}

}