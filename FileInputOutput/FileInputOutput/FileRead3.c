# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// ���� �б�
int main()
{
	// ���� �ܾ� �����ϱ�
	FILE* fp;
	char buffer[256]; // �ܾ ������ �迭

	fopen_s(&fp, "words.txt", "r");
	if (fp == NULL)
	{
		printf("���� ���⿡ ������\n");
		return -1;
	}

	// fgets()�� �о����
	while (fgets(buffer, sizeof(buffer), fp) != NULL)
	{
		printf("%s", buffer);
	}




	return 0;
}