# include <stdio.h>

// 지역 변수 생명 주기 (Scope)
// 믈록 (함수, 제어문) 안에서 초기화될 때 생성되고 믈록을 벗어나면 소멸(해제)한다.

int sum10();
int main_LocalVar() {

	int value = sum10();
	printf("value = %d\n", value);




	return 0;
}

int sum10() {
	static int x = 1; // 지역변수
	x = x + 10;
}