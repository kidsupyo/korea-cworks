# include <stdio.h>
# include <string.h>
void UpperCase();
int main() {

	char buf[] = " I am a student";

	printf("%c\n", buf[0]);

	int length;
	length = strlen(buf);
	printf("문자열의 개수 : %d\n", length);

	int i;
	for (i = 0; i < length; i += 1) {
		//printf("%c", buf[i]);
		UpperCase(buf[i]);
	}

	return 0;
}

void UpperCase(char data) {
	if (data >= 'a' && data <= 'z') {
		data = data - ('a' - 'A');
	}
	printf("%c", data);
}