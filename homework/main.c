#include <stdio.h>

// 숙제
int main() {
	int a = 20;
	int b = 30;
	//0010 0000 (20)
	//0011 0000 (30)
	//0001 0000 (10)
	//0010 0000 (20)
	
	
	printf("a:%d", a^b^a);
	printf("b:%d", b^a^b);
	// xor만 사용해서
	// a에는 b의 값이
	// b에는 a의 값이 저장되도록 해보세요.
	// 다른 변수를 만들면 안됩니다.


	return 0;
}
