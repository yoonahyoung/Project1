#include<stdio.h>

int main() {
	int a;
	a = 20;

	int* pa;  // 포인터 형지정자 뒤에 *
	pa = &a;

	int** ppa;
	ppa = &pa;

	**ppa; //주소값에 사용하는 asterisk(앞에 *)는 포인터 연산자
	**&pa;  //변수가 할당받은 주소값의 정체는 *& 
	*pa;
	*&a;
	a;

	**ppa = 100;

	printf("&**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p, &a = %p\n", &**ppa, &**&pa, &*pa, &*&a, &a);
	printf("**ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d\n", **ppa, **&pa, *pa, *&a, a);



	return 0;
}
