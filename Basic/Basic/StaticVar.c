# include <stdio.h>

void call();
int main() {


	call();

	return 0;
}

// void - ��ȯ �ڷ����� ������ �ǹ�(�� �Լ� �����ϴ� �Ŵϱ�)
void call()
{

	int x = 0;
	x += 1;

	printf("���� ȣ���� %d��°�Դϴ�.\n", x);
}