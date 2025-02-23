# include <stdio.h>

// 전역 변수의 생명 주기
// 프로그램이 시작될 때 생성되고 프로그램이 종료될 때 소멸(해제)된다.

int x = 1; // 전역 변수 (global variable)
int main() {

	int value = add10(); // 지역 변수 (local variable)
	printf("value = %d\n", value);

	return 0;
}

int add10() {

	x = x + 10;

	return x;
}