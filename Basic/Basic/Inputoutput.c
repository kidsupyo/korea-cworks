# include <stdio.h>

int main()
{
	int number = 11;
	char place = 'B'; //문자 1개는 홑따옴표 쓴다
	char name[] = "김윤호"; // 문자 여러개 - 문자열
	float weight = 60.3f; // 실수 : 끝에 'f'를 붙인다
	double height = 171.5; // 실수

	printf("%d\n", number);
	printf("%c 강의실\n", place);
	printf("제 이름은 %s입니다\n", name);
	printf("제 몸무게는 %f입니다\n", weight);

	// 자료형의 크기
	printf("%d, %dByte\n", number, sizeof(number));

	return 0;
}