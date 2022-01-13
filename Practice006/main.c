#include<stdio.h>

int main() {
	int x = 3;
	int y = 1;

	printf("%d", x > y); // x > y 는 3 > 1 이므로 참입니다.
	
	printf("%d", x < y);// x < y 는 3 < 1 이므로 거짓(0)입니다.

	printf("%d", x >= y); // 3 > 1이므로 참입니다.

	printf("%d", x <= y); // 3 < 1 는 성립하지 않으므로 거짓(0)을 출력합니다.

	printf("%d", x == y); // x가 y보다 크기 때문에 x == y 는 거짓(0)을 반환합니다.

	printf("%d", x != y); // x가 y보다 큽니다. x와 y는 서로 같지 않으므로 x == y는 참(1)을 반환합니다.


	int a = 3;
	int b = 5;

	printf("%d", a > b); // a > b 는 3 > 5 이므로 거짓(0)입니다.

	printf("%d", a < b); // a < b 는 3 < 5 이므로 참입니다.

	printf("%d", a >= b); // 3 > 5 수식은 성립하지 않으므로 거짓(0)입니다.

	printf("%d", a <= b); // 3 < 5 성립하므로 참을 출력합니다.

	printf("%d", a == b); // a가 b보다 작기 때문에 a == b 는 거짓(0)을 반환합니다.

	printf("%d", a != b); // a가 b보다 작으면, a와 b는 서로 같지않으므로 a != b는 참(1)을 반환합니다.


	int c = 3;
	int d = 3;

	printf("%d", c > d); // c > d 는 3 > 3 이므로 거짓(0)입니다.

	printf("%d", c < d); // c < d 는 3 < 3 이므로 거짓(0)입니다.

	printf("%d", c >= d); // 3 >= 3 이므로 참입니다.

	printf("%d", c <= d); // 3 = 3 이므로 참을 출력합니다.

	printf("%d", c == d); //c는 3이고, d는 3이므로 c = d입니다. 따라서 c == d는 서로 같으므로 참(1)을 반환합니다.

	printf("%d", c != d); // c와 d가 서로 같으므로 c != d는 거짓(0)을 반환합니다.
	


	return 0;
}
