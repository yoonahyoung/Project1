#include <stdio.h>

int main() {

	int a = 2;
	int b = 3;

	int c = a & b;
	//00000010 (a)
	//00000011 (b)
	//00000010 (a&b)
	printf("a:%d & b:%d = %d\n", a, b, c);
	
	c = a | b;
	//00000010 (a)
	//00000011 (b)
	//00000011 (a | b)
	printf("a:%d | b:%d = %d\n", a, b, c);

	
	c = a ^ b;
	//00000010 (a)
	//00000011 (b)
	//00000001 (a ^ b)
	printf("a:%d ^ b:%d = %d\n", a, b, c);

	
	c = ~a;
	//00000010 (a)
	//11111101 (~a)
	printf("a:%d: = ~a:%d\n", a, c);


	return 0;
}
