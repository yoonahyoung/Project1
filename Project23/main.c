#include <stdio.h>

//명령어를 하나로 묶을 때 사용하는 것을 함수라고 합니다.

//returntype 함수명(매개변수){
// ;명령어
//}
//return type void인 경우에는 리턴값이 없다는 의미입니다.
void printMonster() {
	for (int i = 0; i < 3; i++) {
		printf("monster_%d\n", i);
	}
}


//returnType:int
//함수명:add
//매개변수:int형값 2개를 전달받음.

int add(int a, int b) {
	int sum = a + b;
	return sum; //returnType이 있는 경우에는 반드시 return문이 있어야 합니다.
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int main() { //main함수는 프로그램의 진입점

	int a = 20;
	int b = 30;

	int sum = add(a, b);

	printf("%d + %d = %d\n", a, b, sum);

	sum = sub(a, b);
	printf("%d - %d = %d\n", a, b, sum);

	sum = mul(a, b);
	printf("%d x %d = %d\n", a, b, sum);

	return 0;
}
