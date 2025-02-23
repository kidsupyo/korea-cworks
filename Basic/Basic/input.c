# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
int main()
{
	// 년도를 입력하세요
	//int year;

	//printf("년도 입력 : ");
	//scanf("%d", &year);
	//printf("%d년 입니다\n", year);
	//printf("%d 년 입니다. 메모리 주소 : 0Xx\n", year, &year);

	// 점수가 3개인 배열
	//int score[] = { 80,70,90 };
	//printf("%d %x\n", score[0], &score[0]);
	//printf("%d %x\n", score[1], &score[1]);
	//printf("%d %x\n", score[2], &score[2]);

	// 배열의 시작 주소는 배열의 이름이다.


	// 도시를 입력하세요
	//char city[20];

	//printf("도시 입력: ");
	//scan_s("s", city, sizeof(city));


	// 요소가 5개인 졍수형 배열 score 선언
	int score[] = { 1,2,3,4,5 };

	// 특정 요소에 접근(조회)
	//printf("score[1] = %d\n", score[1]);

	// 요소 수정
	//score[2] = 10; // 걍 수정하면됨

	// 전체 조회(검색)
	int n;
	for (n = 0; n < 5; n += 1) {
		printf("%d\n", score[n]);
	}

	// 젙체 합계
	int sum = 0;
	for (n = 0; n < 5; n += 1) {
		sum += score[n];
	}
	printf("%d", sum);
	return 0;
}