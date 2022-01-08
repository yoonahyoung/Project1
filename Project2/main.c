#include<stdio.h> //헤더파일(각종 함수가 데이터 타입의 정보가 들어있다.)

int global =  0;
//메인함수: 프로그램의 진입점 역할을 합니다.(entry point)
// 프로그램은 메인함수에서부터 시작해서
//메인함수가 끝나면 프로그램이 종료됩니다.
int main() {   //중괄호 블럭을 열었으면 반드시 닫는 괄호를 써주어야 한다.

	short a;   //변수명 영대소문자, _, 숫자 사용할 수 있음. 숫자는 첫글자로 사용 안됨.
	           //변수명의 길이는 256문자 이상입니다.
	           

	int score; //변수명은 저장공간의 용도를 알려주는 이름으로 명명하는게 좋음.

	// ;(세미콜론은 명령이 끝났다라는 의미로 사용. 명령 뒤에는 반드시 붙여야 한다.
	// 같은 중괄호 블럭 영역 안에 동일한 변수명을 쓸수 없다.

	short b = 10;
	short c;
	c = 20;

	printf("monster\n"); //문자열을 콘솔창에 출력할 때 사용하는 함수. 
	                     // 형직지정 문자열을 지원한다.
	printf("b = %d , c = %d\n", b , c);



	char d = 68;

	printf("%c\n", d);

	float e = 1.2f; //

	double f = 3.4;

	printf("e= %f, f=%lf\n", e, f);

	unsigned short g = 103413;
	unsigned long h = 42949672;
	unsigned int  i = 23094888;

	printf("g = %d, h = %lu\n, i = %u", g, h, i);


	return 0;
}




