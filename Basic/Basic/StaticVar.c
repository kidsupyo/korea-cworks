# include <stdio.h>

void call();
int main() {


	call();

	return 0;
}

// void - 반환 자료형이 없음을 의미(걍 함수 정의하는 거니까)
void call()
{

	int x = 0;
	x += 1;

	printf("현재 호출을 %d번째입니다.\n", x);
}