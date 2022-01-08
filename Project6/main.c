#include<stdio.h>

int main() {
	int a = 20;
	int c = 0;

	a++;    //후위식
	printf("a = %d\n", a);

	++a;  //전위식
	printf("a = %d\n", a);

	c = a++;    //후위식
	// c = a;
	// a = a+1;
	printf("c = %d, a =%d\n", c, a);

	c = ++a;   //전위식
	// a = a+ 1;
	// c = a;
	printf("c = %d, a = %d\n", c, a);

	//--연산자도 넣어서 해보세요.


	int b = 20;
	int e = 0;

	b--;   //후위식
	printf("b = %d\n", b);

	--b;  //전위식
	printf("b = %d\n", b);

	e = b--;
	printf("e = %d, b = %d\n", e, b);

	e = ++b;
	printf("e = %d, b = %d\n", e, b);

	return 0;
}