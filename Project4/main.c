#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int minValue = 0;
	int maxValue = 10;

	int xValue = 0; //�ڵ�����

	printf("x���� �Է��ϼ���(������):");
	scanf("%d", &xValue); //&(�ּҿ�����) ������ �Ҵ� ������ �ּҰ��� �����ݴϴ�.
	
	int result = (xValue > minValue) && (xValue < maxValue);

	printf("minValue:%d �� maxValue:%d ���̿� xValue:%d = %d\n", minValue, maxValue, xValue, result);

		return 0;
}