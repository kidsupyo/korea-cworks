# define _CRT_SECURE_NO_WARNINGS // strcpy() ���� ����
# include <stdio.h>
# include <string.h> // strlen() �Լ�

int main_strfunc() {

	// ���ڿ��� ����
	char msg1[] = "Good";
	char msg2[20];

	int len = strlen(msg1);
	printf("���ڿ��� ���� : %d\n", len);

	// ���ڿ��� ���� - strcpy(������ ���ڿ�, ���� ���ڿ�
	printf("%s\n", strcpy(msg2, msg1));

	// ���ڿ��� �� - strcmp(���ڿ�1, ���ڿ�2)
	// ���ڿ��� ��ġ�ϸ� 0, ����ġ�ϸ� 1�� ��ȯ
	char greet1[] = "hello";
	char greet2[] = "hell";

	printf("���ڿ��� �Է��ϼ��� : ");
	scan_s("%s", greet2, sizeof(greet2));

	if (strcmp(greet1, greet2) == 0) {
		printf("���ڿ��� ��ġ�մϴ�");
	}
	else {
		print("���ڿ��� ��ġ���� �ʽ��ϴ�");
	}

	printf("%d\n", strcmp(greet1, greet2));

	return 0;
}