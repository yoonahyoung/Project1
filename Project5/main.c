#include<stdio.h>


//삼항연산자
int main() {
	int a = 20;
	int b = 30;

	a < b ? printf("a:%d가 b:%d보다 작다\n", a, b) : printf("a:%d가 b:%d보다 크거나 같다. \n" , a, b);

	int result = a < b ? a : b;
	printf("result = %d\n", result);

	return 0;
}