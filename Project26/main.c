#include<stdio.h>

//void printArray(int* pa, int size)
void printArray(int pa[], int size)
{
	for (int i = 0; i < size; i++) {
		printf("pa[%d] = %d\n", pa[i]);
	}
}

void printArray2(int(*parray)[10], int column, int row) {
	for (int i = 0; i < column, i++) {
		for (int j = 0; j < row; j++) {
			printf("parray[%d][%d] = %d\n", i, j, parray[i][j]);
		}
	}
}

int main() {
	int array[10]; //일차원배열
	int array2[10][10]; //이차원배열


	int* pa = array;

	for (int i = 0; i < 10; i++) {
		array[i] = i;
	}

	printArray(array, 10);

	int(*parray)[10] = array2;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			parray[i][j] = i * 10 + j;//배열식
			*(*(parray + i) + j) = i * 10 + j;//포인터식
		}
	}

	printArray2(array2, 10, 10);

	return 0;
}
