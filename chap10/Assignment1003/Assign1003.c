/* ���ϸ�: Assign1003.c

 * ����: PA03. LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��϶�
               ���̵� �Է¹޾Ƽ� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������ ��ϵ� �н����带 ���ؼ� 
			   ������ "�α��� ����"�̶�� ����Ѵ� LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�


 * �ۼ���: �迵��

 * ��¥: 2025.06.06

 * ����: v1.0
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
				printf("�α��� ����\n");
			}
			else 
			{
				continue;
			}

			break;
		}

	}

}