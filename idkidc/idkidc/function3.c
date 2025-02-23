# include <stdio.h>
# include <math.h>

// 절댓값을 구하는 함수
int myAbs(int x) {
	if (x < 0) {
		return -x;
	}
	else {
		return x;
	}
}

int main_fuction3() {

	int value1, value2, value3;

	value1 = abs(-3); // 내장 함수 호출
	value2 = abs(3);
	value3 = myabs(-3); // 사용자 정의 함수 호출

	return 0;
}