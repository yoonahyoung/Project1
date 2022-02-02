#include<stdio.h>
#include"Math2.h" //내가 만든 걸 쓸때는 따옴표

//파일분할
//분할 컴파일
//컴파일 과정
int main() {
	int a = 20;
	int b = 30;

	printf("%d + %d = %d\n", a, b, add(a, b));

	printf("%d + %d = %d\n", a, b, sub(a, b));

	printf("%d + %d = %d\n", a, b, mul(a, b));


	return 0;
}

