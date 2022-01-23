#include<stdio.h>

int main() {
	/*
	int a0 = 0;
	int a1 = 1;
	int a2 = 2;
	//...
	int a100 = 100;

	if (a0 % 2 == 0) {
		printf("%d\n", a0);
	}
	if (a1 % 2 == 0) {
		printf("%d\n", a1);
	}
	if (a2 % 2 == 0) {
		printf("%d\n", a2);
	}
	*/
	// 동일한 데이타 타입의 공간이 여러개 필요할때
	// 배열을 사용하시면 됩니다.
	// 배열은 데이타 저장공간이 서로 인접해서 만들어져서
	// 배열식을 사용할 수 있습니다.
	// 배열식을 사용할 수 있으니까. 반복문으로 데이타에 접근할 수 있습니다.


   // 배열명은 배열의 선두번지 주소값(주소상수)
	int array[101];

	array[0] = 10;
	array[1] = 20;
	for (int i = 0; i < 101; i++) {
		array[i] = i;
	}
	for (int i = 0; i < 101; i++) {
		if(array[i] % 2 == 0)
		{
			printf("array[%d] = %d\n", i, array[i]);
		}
	}

	return 0;
}
