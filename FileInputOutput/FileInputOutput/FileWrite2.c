# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// 파일 쓰기(저장)
int main_3() {

	// 아스키(코드값) 파일 쓰기
	FILE* fp;
	fp = fopen("ascii.txt", "w");
	if (fp == NULL)
	{
		printf("파일 열기에 실패함\n");
		return -1;
	}

	// 파일 쓰기
	for (int i = 0; i < 128; i++)
	{
		if (i % 10 == 0) {// -> 문자 10개 당 줄 바꿈
			fputc('\n', fp);
		}
		fputc(i, fp); // 한 문자 쓰기
		fputc('\t', fp);
	}


	fclose(fp);

	return 0;
}