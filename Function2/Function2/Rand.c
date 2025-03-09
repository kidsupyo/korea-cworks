#include <stdio.h>
#include <stdlib.h> // srand(), rand() 정의

int main() {

	int rndVal;

	// rand() - 난수(무작위 수)
	srand(11);

	rndVal = rand(); // rand 호출
	printf("%d\n", rndVal);





	return 0;
}