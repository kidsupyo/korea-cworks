# include <stdio.h>

// 두 수의 합을 계산하는 함수
int add(int x, int y); //함수 선언
int sub(int x, int y);
int main_stuff() {

	int result1;
	result1 = add(10, 20); // 함수 호출
	printf("result : %d\n", result1);

	int result2;
	result2 = sub(20, 10);
	printf("result : %d\n", result2);

	return 0;
}

// 함수 정의
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	if (x > y) {
		return x - y;
	}
	else {
		return y - x;
	}
}