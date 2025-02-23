# include <stdio.h>

// 정적변수 - static
// 선언된 함수가 종료되어도 그 값을 계속 유지하는 변수
// 프로그램이 종료될 때 소멸함
void call();
int main_staticvar() {


	call();

	return 0;
}

// void - 반환 자료형이 없음을 의미(걍 함수 정의하는 거니까)
void call()
{

	static int x = 0;
	x += 1;

	printf("현재 호출을 %d번째입니다.\n", x);
}