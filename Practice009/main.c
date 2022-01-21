#include<stdio.h>
//for 반복문은.. 내 스스로 하기엔 너무 어렵다... ㅠㅠ

int main() {

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			for (int k = 0; k < i; k++) {
				printf("*");
			}
		}printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 10; j >= i; j--) {
			for (int k = 10; k > i; k--) {
				printf("*");
			}
		}printf("\n");
	}

	return 0;
}
