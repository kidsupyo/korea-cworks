# include <stdio.h>

// ���� ���� ���� �ֱ� (Scope)
// �ɷ� (�Լ�, ���) �ȿ��� �ʱ�ȭ�� �� �����ǰ� �ɷ��� ����� �Ҹ�(����)�Ѵ�.

int sum10();
int main_LocalVar() {

	int value = sum10();
	printf("value = %d\n", value);




	return 0;
}

int sum10() {
	static int x = 1; // ��������
	x = x + 10;
}