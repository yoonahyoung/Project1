#include<stdio.h>
#include<time.h>

int main() {
	int a = 20;
	int b = 30;
	int c = 20;


	int result; // �޸𸮿� 4byte ������� �������
	            // �� �� �޸𸮰����� ���� �����Ұž�.
	            // �׸��� �� ������ result ��� �̸����� �����Ұž�.
		
		
    result = a > b;
	printf("a:%d > b:%d = %d\n", a, b, result);

	result = a < b;
	printf("a:%d < b:%d = %d\n", a, b, result);

	result = a == b;
	printf("a:%d == b:%d = %d\n", a, b, result);

	result = a == c;
	printf("a:%d == c:%d = %d\n", a, c, result);


	return 0;
}