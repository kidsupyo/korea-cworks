# define _CRT_SECURE_NO_WARNINGS // strcpy() 오류 방지
# include <stdio.h>
# include <string.h> // strlen() 함수

int main_strfunc() {

	// 문자열의 개수
	char msg1[] = "Good";
	char msg2[20];

	int len = strlen(msg1);
	printf("문자열의 개수 : %d\n", len);

	// 문자열의 복사 - strcpy(복사할 문자열, 원본 문자열
	printf("%s\n", strcpy(msg2, msg1));

	// 문자열의 비교 - strcmp(문자열1, 문자열2)
	// 문자열이 일치하면 0, 불일치하면 1을 반환
	char greet1[] = "hello";
	char greet2[] = "hell";

	printf("문자열의 입력하세요 : ");
	scan_s("%s", greet2, sizeof(greet2));

	if (strcmp(greet1, greet2) == 0) {
		printf("문자열이 일치합니다");
	}
	else {
		print("문자열이 일치하지 않습니다");
	}

	printf("%d\n", strcmp(greet1, greet2));

	return 0;
}