# include <stdio.h>

// �� ���� ���� ����ϴ� �Լ�
int add(int x, int y); //�Լ� ����
int sub(int x, int y);
int main_stuff() {

	int result1;
	result1 = add(10, 20); // �Լ� ȣ��
	printf("result : %d\n", result1);

	int result2;
	result2 = sub(20, 10);
	printf("result : %d\n", result2);

	return 0;
}

// �Լ� ����
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	if (x > y) {
		return x - y;
	}
	else {
		return y - x;
	}
}