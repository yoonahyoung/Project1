#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//파일 입출력
//파일을 저장할때 2가지 방법이 있습니다.
//text방식, binary방식
int main() {
	FILE* fp;

	fp = fopen("test.txt", "w");

	if (fp == NULL) {
		printf("파일열기에 실패하였습니다.");
		return 0;
	}

	fputc('a', fp);
	fputc('b', fp);
	fputc('x', fp);

	fclose(fp);

	//파일읽기
	fp = fopen("test.txt", "r");
	if (fp == NULL) {
		printf("파일열기에 실패하였습니다.");
		return 0;
	}

	char c;
	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	fclose(fp);




	return 0;
}
