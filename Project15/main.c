#include<stdio.h>


int main() {

	float a = 43234.4f;
	a = -1.0f;
	//반복횟수는 잘 모르겠는데 조건만 만족한다면 반복해도돼! 할때 쓰는게 while문
	while (a > 0) {
		a -= 10.7f;
		
		printf("while a=%f", a);
	}
	
	printf("\n\n");

	a = -0.4f;
	do {
		a -= 10.7f;
		printf("do-while a = %f", a);
	} while (a > 0);




	return 0;
}
