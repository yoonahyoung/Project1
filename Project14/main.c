#include <stdio.h>

int main() {

	//초기식;조건식;증감식
	//for문은 반복횟수를 아는 경우 사용하기 좋은 구조
	for (int i = 0; i < 10; i++) {
		printf("i = %d\n", i);
	}

	printf("\n\n");
	for (int i = 0, j = 0; i < 10 && j < 10; i++, j = j + 2) {
		printf("i = %d, j = %d\n", i, j);
	}

	printf("\n\n");

	//식- 결과값을 돌려주는 문장(expression)
	//문- 처리하는 문장(statement)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("i = %d, j = %d\n", i, j);
		}
	}

	printf("\n\n");

	int i = 0;
	for (;;) {//;;은 초기식 조건식을 생략한거 그래서 무한 loop
		i++;
		printf("i = %d\n", i);
		if (i > 10) {
			break; //반복문을 탈출할 때 사용
		}

	}

	return 0;
}
