#include<stdio.h>


//���׿�����
int main() {
	int a = 20;
	int b = 30;

	a < b ? printf("a:%d�� b:%d���� �۴�\n", a, b) : printf("a:%d�� b:%d���� ũ�ų� ����. \n" , a, b);

	int result = a < b ? a : b;
	printf("result = %d\n", result);

	return 0;
}