# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// ���� ����(����)
int main_3() {

	// �ƽ�Ű(�ڵ尪) ���� ����
	FILE* fp;
	fp = fopen("ascii.txt", "w");
	if (fp == NULL)
	{
		printf("���� ���⿡ ������\n");
		return -1;
	}

	// ���� ����
	for (int i = 0; i < 128; i++)
	{
		if (i % 10 == 0) {// -> ���� 10�� �� �� �ٲ�
			fputc('\n', fp);
		}
		fputc(i, fp); // �� ���� ����
		fputc('\t', fp);
	}


	fclose(fp);

	return 0;
}