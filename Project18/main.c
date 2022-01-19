#include <stdio.h>

int main() {
	int a;
	a = 20;

	printf("&a = %p\n", &a);

	// C언어에는 변수의 할당 받은 공간의 주소값을
	// 저장하는 데이타 타입이 있습니다.
	// 포인터형이라고 합니다.

	int* pa;   // 포인터 형지정자
	pa = &a;

	printf("&pa = %p\n", &pa);

	int** ppa;
	ppa = &pa;

	printf("&ppa = %p\n", &ppa);

	int*** pppa;
	pppa = &ppa;



	return 0;
}
