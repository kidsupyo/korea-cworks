# include <stdio.h>

int main()
{
	int number = 11;
	char place = 'B'; //���� 1���� Ȭ����ǥ ����
	char name[] = "����ȣ"; // ���� ������ - ���ڿ�
	float weight = 60.3f; // �Ǽ� : ���� 'f'�� ���δ�
	double height = 171.5; // �Ǽ�

	printf("%d\n", number);
	printf("%c ���ǽ�\n", place);
	printf("�� �̸��� %s�Դϴ�\n", name);
	printf("�� �����Դ� %f�Դϴ�\n", weight);

	// �ڷ����� ũ��
	printf("%d, %dByte\n", number, sizeof(number));

	return 0;
}