#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int minValue = 0;
	int maxValue = 10;

	int xValue = 0; //자동변수

	printf("x값을 입력하세요(정수값):");
	scanf("%d", &xValue); //&(주소연산자) 변수가 할당 공간의 주소값을 돌려줍니다.
	
	int result = (xValue > minValue) && (xValue < maxValue);

	printf("minValue:%d 와 maxValue:%d 사이에 xValue:%d = %d\n", minValue, maxValue, xValue, result);

		return 0;
}