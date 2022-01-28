#include<stdio.h>

void Swap(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

void pSwap(int* pa, int* pb) {
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {
	int a = 20;
	int b = 30;

	//scanf("%d", &a);

	printf("a = %d, b = %d", a, b);

	Swap(a, b); // call by value
	
	printf("a = %d, b = %d", a, b);

	pSwap(&a, &b); //call by address

	printf("a = %d, b = %d", a, b);


	return 0;
}
