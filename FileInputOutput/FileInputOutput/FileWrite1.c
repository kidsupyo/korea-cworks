# define _CRT_SECURE_NO_WARNINGS // fopen() ���� ����
# include <stdio.h>

// ���� ����(����)
int main_1()
{
	// ���� ����ü ������ ����
	FILE* fp;

	//fopen(����, ���) : ������ - w, �б��� - r
	fp = fopen("out.txt", "w");
	// ����(����) ó��
	if (fp == NULL)
	{
		printf("���� ���⿡ ������\n");
		return 1; // 0 : ����, 1or-1 : ����
	}

	// ���� ����
	// �� ���� ����
	fputc('H', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);

	// ���ڿ� ����
	fputs("\nApple\n", fp);
	fputs("���\n", fp);



	fclose(fp); // ���� �ݱ�

	return 0;
}