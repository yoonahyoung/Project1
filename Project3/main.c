#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;

	int result = a + b;
	printf("%d + %d = %d\n", a, b, result);

	result = a - b;
	printf("%d - %d = %d\n", a, b, result);

	result = a * b;
	printf("%d x %d = %d\n", a, b, result);

	float resultf = a / b;   // 정수 / 정수 = 정수
	printf("%d / %d = %f\n", a, b, resultf);

	resultf = a / (float)b;   // 정수 / (float)정수 = 정수 // 형변환 연산자
	printf("%d / %d = %f\n", a, b, resultf);


	return 0;
}
