# include <stdio.h>

// �������� - static
// ����� �Լ��� ����Ǿ �� ���� ��� �����ϴ� ����
// ���α׷��� ����� �� �Ҹ���
void call();
int main_staticvar() {


	call();

	return 0;
}

// void - ��ȯ �ڷ����� ������ �ǹ�(�� �Լ� �����ϴ� �Ŵϱ�)
void call()
{

	static int x = 0;
	x += 1;

	printf("���� ȣ���� %d��°�Դϴ�.\n", x);
}