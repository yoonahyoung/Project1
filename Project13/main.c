#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 보통 goto 문은 쓰지 말라고 하고 특히나 상향식 분기는 쓰지 말라고 한다
//하향식 분기는 그래도 프로그램의 순서를 지키기 때문에 괜찮다고는 함
//굳이 goto문을 쓰지 않아도 로직을 만들 수 있기 때문에 굳이 쓰지 말고
//만약 쓴다면 하향식 분기를 사용하도록 하시라
//그치만 반복문에서 결과를 내어서 맨 마지막으로 빠져나갈땐 유용하다고 한다.
int main() {
	int value = 0;

Start: //레이블: 코드의 위치

	printf("정수값을 입력하세요: ");
	scanf("%d", &value);

	if (value == 0) {
		goto Exit;  //무조건 분기
	}

	printf("value = %d\n" , value);

	goto Start;


Exit:

		return 0;
}
