#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


// 동적 이차원배열
int main() {
    int column = 0;
    int row = 0;

    printf("열의 값을 입력하세요:");
    scanf("%d", &row);
    printf("행의 값을 입력하세요:");
    scanf("%d", &column);

    int** pparray = (int**)malloc(sizeof(int*) * column);

    for (int i = 0; i < column; i++) {
        pparray[i] = (int*)malloc(sizeof(int) * row);
    }

    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            pparray[i][j] = i * row + j;
        }
    }

    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            printf("pparray[%d][%d] = %d\n", i, j, pparray[i][j]);
        }
    }

    for (int i = 0; i < column; i++) {
        free(pparray[i]);
    }

    free(pparray);




    return 0;
}
