#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {


	int xValue = 0;

	printf("���̰� ������� ���纸����.\n");
	printf("����� 1�� ������ �����Դϴ�.\n");
	printf("���� �Է�:");

	scanf("%d", &xValue);

	int minValue = 7;
	int maxValue = 10;

	int result = (xValue > minValue) && (xValue < maxValue);

	printf("���̴� ��� ��ȩ���Դϴ�. ���:%d, ����� ��:%d", result, xValue);

	return 0;

}