# include <stdio.h>

// ���� ������ ���� �ֱ�
// ���α׷��� ���۵� �� �����ǰ� ���α׷��� ����� �� �Ҹ�(����)�ȴ�.

int x = 1; // ���� ���� (global variable)
int main() {

	int value = add10(); // ���� ���� (local variable)
	printf("value = %d\n", value);

	return 0;
}

int add10() {

	x = x + 10;

	return x;
}