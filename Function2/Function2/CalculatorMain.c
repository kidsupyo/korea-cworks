# include <stdio.h> // c언어에서 제공된 헤더파일
# include "calculator.h"; // 내가 만든 헤더파일
int main_calc() {

	int x = 3, y = 4, result;
	count++;

	result = add(x, y);
	printf("count : %d\n", count);
	printf("result : %d\n", result);

	return 0;
}