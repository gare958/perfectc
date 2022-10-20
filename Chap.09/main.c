#include <stdio.h>

void message();	//함수 원형
void cacao();	//함수 원형

int main(void)
{
	puts("메인 함수 시작입니다.");
	message(); //함수 message 호출
	cacao(); //함수 cacao 호출
	puts("메인 함수 종료입니다.");

	return 0;
}

//함수 message 구현
void message()
{
	puts("\t메시지입니다.");
}