#include<stdio.h>

int main() {
	int a = 20;
	int c = 0;

	a++;    //������
	printf("a = %d\n", a);

	++a;  //������
	printf("a = %d\n", a);

	c = a++;    //������
	// c = a;
	// a = a+1;
	printf("c = %d, a =%d\n", c, a);

	c = ++a;   //������
	// a = a+ 1;
	// c = a;
	printf("c = %d, a = %d\n", c, a);

	//--�����ڵ� �־ �غ�����.


	int b = 20;
	int e = 0;

	b--;   //������
	printf("b = %d\n", b);

	--b;  //������
	printf("b = %d\n", b);

	e = b--;
	printf("e = %d, b = %d\n", e, b);

	e = ++b;
	printf("e = %d, b = %d\n", e, b);

	return 0;
}