#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void f1(void);
int f3(int a, int b);

int main()
{
	//assignment0501();
	//assignment0502();
	assignment0503();

	return 0;
}

int assignment0501()
{

}

int assignment0502()
{

}


void f1(void)
{
	//1. hello ���
	printf("hello world!\n");
	return;
}

/*
  �Լ���: int f3(int a, int b)

  ���: �Էµ� �� �� a,b�� ���� ��ȯ
  
  �Է�: a, b�� ����

  ��ȯ: ����
*/

int f3(int a, int b)
{
	int resurt = 0;

	// �� ���� ���ؼ� ��ȯ

	resurt = a + b;

	return resurt;
}




