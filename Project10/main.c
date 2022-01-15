#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 20;
	printf("정수값을 입력하세요:");
	scanf("%d", &a);

	//조건식: 식의 연산의 결과값이 논리값
	if (a > 20) {//참인 경우만 처리한다고 해서 단일 조건문
		printf("\na:%d 가 20보다 크다",a);
	}

	if (a > 20) {
		printf("\na:%d가 20보다 크다.",a);
	}
	else {
		printf("\na:%d가 20보다 작거나 같다.",a);
	}

	//c언어는 정수값을 가지고 논리식을 처리해서 정수식도 가능합니다.
	if (a - 20) {
		printf("\na:%d 20과 같지 않다.", a);
	}
	else {
		printf("\na:%d 20과 같다.", a);
	}


	return 0;
}
