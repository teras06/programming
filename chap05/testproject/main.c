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
	//1. hello 출력
	printf("hello world!\n");
	return;
}

/*
  함수명: int f3(int a, int b)

  기능: 입력된 두 수 a,b를 더해 반환
  
  입력: a, b는 정수

  반환: 정수
*/

int f3(int a, int b)
{
	int resurt = 0;

	// 두 수를 더해서 반환

	resurt = a + b;

	return resurt;
}




