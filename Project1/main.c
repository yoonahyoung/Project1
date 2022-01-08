#include<stdio.h>
#include<time.h>

int main() {
	int a = 20;
	int b = 30;
	int c = 20;


	int result; // 메모리에 4byte 저장공간 만들어줘
	            // 나 그 메모리공간에 정수 저장할거야.
	            // 그리고 그 공간을 result 라는 이름으로 접근할거야.
		
		
    result = a > b;
	printf("a:%d > b:%d = %d\n", a, b, result);

	result = a < b;
	printf("a:%d < b:%d = %d\n", a, b, result);

	result = a == b;
	printf("a:%d == b:%d = %d\n", a, b, result);

	result = a == c;
	printf("a:%d == c:%d = %d\n", a, c, result);


	return 0;
}