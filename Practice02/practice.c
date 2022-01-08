#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {

	int a = 20;
	int b = 30;
	int c = 20;

	int result;

	printf("산술 연산자와 관계연산자는 기본적이어서 형변환 연산자만 기록함\n");
	float resultf = 0;

	resultf = a / (float)b;   // 정수 / (float)정수 = 정수 // 형변환 연산자
	printf("%d / %d = %f\n", a, b, resultf);

	
	int num1, num2;

	printf("num1입력:");
	scanf("%d", &num1);

	printf("num2입력:");
	scanf("%d", &num2);

	 num1 > num2 ? printf("num1이 큼\n") : printf("num2가 큼\n");


	return 0;

}