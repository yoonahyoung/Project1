#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {


	int xValue = 0;

	printf("보미가 몇살인지 맞춰보세요.\n");
	printf("결과가 1이 나오면 정답입니다.\n");
	printf("나이 입력:");

	scanf("%d", &xValue);

	int minValue = 7;
	int maxValue = 10;

	int result = (xValue > minValue) && (xValue < maxValue);

	printf("보미는 사실 아홉살입니다. 결과:%d, 당신의 답:%d", result, xValue);

	return 0;

}
