#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main() {

	int buff[] = { 10, 20, 30, 40, 50 };
	int output[6];

	FILE* fp;
	int size, count;

	fp = fopen("binary.bin", "wb");
	if (fp == NULL) return 0;  //파일 열기 실패

	size = sizeof(int);

	count = sizeof(buff) / sizeof(int);
	fwrite(buff, size, count, fp);
	fclose(fp);

	fp = fopen("binary.bin", "rb");
	if (fp == NULL) return 0;

	int i = 0;

	for (int i = 0; i < count; i++) {
		fread(&output[i], size, 1, fp);
	}

	//fread(output, size, count, fp); //위의 코드와 역할이 같음
	
	for (int i = 0; i < count; i++) {
		printf("output[%d] = %d\n", i, output[i]);
	}

	fclose(fp);



	return 0;
}
