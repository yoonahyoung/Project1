#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {

	int a = 20;
	int b = 30;
	int c = 20;

	int result;

	printf("��� �����ڿ� ���迬���ڴ� �⺻���̾ ����ȯ �����ڸ� �����\n");
	float resultf = 0;

	resultf = a / (float)b;   // ���� / (float)���� = ���� // ����ȯ ������
	printf("%d / %d = %f\n", a, b, resultf);

	
	int num1, num2;

	printf("num1�Է�:");
	scanf("%d", &num1);

	printf("num2�Է�:");
	scanf("%d", &num2);

	 num1 > num2 ? printf("num1�� ŭ\n") : printf("num2�� ŭ\n");


	return 0;

}