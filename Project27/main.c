#define _CRT_SECURE_CO_WARINGS
#include<stdio.h>
#include<stdlib.h>


int global = 0; // 외부변수, 전역변수

int main() {
	/*
	int a = 0; //로컬변수, 자동변수

	static int c = 0; //로컬변수, 정적변수

	int array[1000000];
	*/

	int size = 0;

	printf("저장할 공간의 사이즈를 입력하세요:");
	scanf("%d,",&size);

	//malloc, calloc, realloc
	int* pa = (int*)malloc(sizeof(int) * size);  //동적메모리 공간 할당 요청

	for (int i = 0; i < size; i++) {
		pa[i] = i;
	}

	for (int i = 0; i < size; i++) {
		printf("pa[%d] = %d\n", i, pa[i]);
	}

	free(pa); //동적메모리 공간은 반납처리를 해야합니다.
			//반납처리를 하지 않으면 컴퓨터를 껏다 켜야 할당 해제됩니다.


	return 0;
}
