#include<stdio.h>

int main() {

	int a = 200;
	int b = 100;

	printf("a는 %d, b는 %d\n", a, b);
	a > b ? printf("a가 크네\n") : printf("b가 크네\n");

	int c = 0;
	int d = 0;

	printf("c는 %d, d는 %d\n", c, d);
	printf("b가 a보다 크면 c는 3이 되고 아닐 경우엔 d가 100이 된다.\n");
	a < b ? (c = 3) : (d = 100);
	printf("c=%d, d=%d", c, d);

	return 0;

}
