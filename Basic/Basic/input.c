# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
int main()
{
	// �⵵�� �Է��ϼ���
	//int year;

	//printf("�⵵ �Է� : ");
	//scanf("%d", &year);
	//printf("%d�� �Դϴ�\n", year);
	//printf("%d �� �Դϴ�. �޸� �ּ� : 0Xx\n", year, &year);

	// ������ 3���� �迭
	//int score[] = { 80,70,90 };
	//printf("%d %x\n", score[0], &score[0]);
	//printf("%d %x\n", score[1], &score[1]);
	//printf("%d %x\n", score[2], &score[2]);

	// �迭�� ���� �ּҴ� �迭�� �̸��̴�.


	// ���ø� �Է��ϼ���
	//char city[20];

	//printf("���� �Է�: ");
	//scan_s("s", city, sizeof(city));


	// ��Ұ� 5���� ������ �迭 score ����
	int score[] = { 1,2,3,4,5 };

	// Ư�� ��ҿ� ����(��ȸ)
	//printf("score[1] = %d\n", score[1]);

	// ��� ����
	//score[2] = 10; // �� �����ϸ��

	// ��ü ��ȸ(�˻�)
	int n;
	for (n = 0; n < 5; n += 1) {
		printf("%d\n", score[n]);
	}

	// ��ü �հ�
	int sum = 0;
	for (n = 0; n < 5; n += 1) {
		sum += score[n];
	}
	printf("%d", sum);
	return 0;
}