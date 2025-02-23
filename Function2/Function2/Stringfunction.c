# define _CRT_SECURE_NO_WARNINGS // strcpy() 오류 방지
# include <stdio.h>
# include <string.h> // strlen() 함수

int main() {

	// 문자열의 개수
	char msg1[] = "Good";
	char msg2[20];

	int len = strlen(msg1);
	printf("문자열의 개수 : %d\n", len);

	// 문자열의 복사 - strcpy(복사할 문자열, 원본 문자열
	printf("%s\n", strcpy(msg2, msg1));

	return 0;
}