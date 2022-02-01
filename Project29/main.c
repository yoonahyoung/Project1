#include<stdio.h>

//문자열
//숫자, 문자, 문자를 나열을 한것(문자열)

void printstr(char* pa, int size) {
	for (int i = 0; i < size; i++) {
		putch(pa[i]);
	}
}

void printstr2(char* pa) {
	while (*pa) {
		putch(*pa);
		//printf("%c", *pa);
		pa++;
	}
}

int strlen2(char src[]) {
	int count = 0;
	while (*src) {
		count++;
		src++;
	}
	return count;
}

//문자열 처리함수
//strcpy, strlen, strcat, strcmp...
int main() {
	char str[] = { 'M','O','N' }; //문자배열
	char str2[] = "MON"; //문자열

	printf("str size = %d\n", sizeof(str));
	printf("str2 size = %d\n", sizeof(str2));

	printstr(str, 3);
	putch('\n');

	printstr2(str2);
	putch('\n');

	printstr2(str); //문자배열 끝에 널종료 문자가 없어서 오작동함.

	putch('\n');

	printf("문자열의 갯수는 : %d\n", strlen2("monster"));



	return 0;
}
