# include <stdio.h>
# include <math.h>

// ������ ���ϴ� �Լ�
int myAbs(int x) {
	if (x < 0) {
		return -x;
	}
	else {
		return x;
	}
}

int main_fuction3() {

	int value1, value2, value3;

	value1 = abs(-3); // ���� �Լ� ȣ��
	value2 = abs(3);
	value3 = myabs(-3); // ����� ���� �Լ� ȣ��

	return 0;
}