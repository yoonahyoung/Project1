#include <stdio.h>


int main() {

	int a = 1;

	a = a << 1;
	printf("a << 1 = %d\n", a);

	a = a << 2;
	printf("a << 2 = %d\n", a);

	a = a << 3;
	printf("a << 3 = %d\n", a);

	a = a >> 3;
	printf("a >> 3 = %d\n", a);

	a = a >> 2;
	printf("a >> 2 = %d\n", a);

	a = a >> 1;
	printf("a >> 1 = %d\n", a);



	return 0;
}
