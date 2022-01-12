#include<stdio.h>

int main() {
	int a = 1, b = 1, c = 1, d = 1;

	++a;
	b++;
	c = c + 1;
	d += 1;

	printf("출력값: %d, %d, %d, %d\n", a, b, c, d);
	/* 다음의 결과값은 모두 2다.
	출력값: 2, 2, 2, 2 */

	a = 1;
	b = 1;


	printf("출력값: %d, %d \n", ++a, b++);
	/* 출력값: 2, 1 */

	int m = 10, n = 5;
	int result;

	result = m++ + --n;
	printf("m = %d, n = %d, result = %d \n", m, n, result);

	result = ++m - n--;
	printf("m = %d, n = %d, result = %d \n", m, n, result);
	
	printf("'숫'자가 앞이면 '전'위식, 뒤면 '후'위식, 후위식이면 result에서 원래의 값이 유지가 됨\n");
	printf("전위식은 숫자가 더해진 것이 result값");


	return 0;
}
