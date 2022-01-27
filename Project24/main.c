#include<stdio.h>

int global = 100; //외부변수, 전역변수

int add(int a, int b) { //매개변수(지역변수),자동변수
	int sum; //지역변수, 자동변수
	sum = a + b;

	global = 100;

	return sum;
}

int score(int value) {
	static int scorevalue = 0;  //로컬변수, 정적변수

	scorevalue += value;

	return scorevalue;
}

int* pscore(int value) {
	static int scorevalue = 0;

	scorevalue += value;

	return &scorevalue;
}

int* ppscore(int value) {
	int score = 100;


	return &score; //함수 내부에 자동변수의 주소값을 함수 외부로 전달해서 사용하면 안됨
					//자동변수는 함수의 블럭이 닫힐때 사라졌다고 보는 것이 타당합니다.
}
int main() {

	int a = 20;  //로컬변수(지역변수),자동변수

	global = 1000;
	{
		int b = 10; //로컬변수(지역변수), 자동변수

		b = 20;
	}

	//b = 10; //접근 범위를 벗어나서 에러 발생

	for (int i = 0; i < 10; i++) {
		score(i);
	}

	printf("score= %d\n", score(0));

	for (int i = 0; i < 10; i++) {
		pscore(i);
	}

	int* pa = pscore(0);

	printf("score = %d\n", *pa);

	int** ppa = ppscore(0);

	int array[100];

	for (int i = 0; i < 100; i++) {
		array[i]= i;
	}

	printf("ppscore = %d\n", *ppa);


	return 0;
}
