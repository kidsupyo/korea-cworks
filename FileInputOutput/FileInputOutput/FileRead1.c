# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// ���� ����
int main_2()
{
	// ���� ������ ���� ����
	FILE* fp;
	int ch;


	fp = fopen("out.txt", "r"); // r-�б� ���
	if (fp == NULL)
	{
		printf("���� ���⿡ ������\n");
		return -1;
	}

	// ���� �б�
	// �� ���� �б�
	ch = fgetc(fp);
	printf("%c", ch);

	// ��� ���� �б�
	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF) {// EOF - End Of File
			break;
		}
		printf("%c", ch);
	}

	fclose(fp); // ���� �ݱ�

	return 0;
}