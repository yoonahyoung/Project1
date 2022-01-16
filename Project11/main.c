#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money = 0;
	printf("용돈을 입력하세요: ");
	scanf("%d", &money);

	//다중조건문
	//값을 가지고 조건을 만드실때는 범위로 지정하시는게 좋습니다.
	if (money <=20000 && money > 10000) {  //이것이 확률이 가장 높음 70%. 
	//100만번 실행한다고 쳤을때 확률이 얘가 젤 높다면 젤 위쪽으로 두어라. 
	//확률이 높은건 제일 위쪽으로.
	printf("라면\n");
	}
	else if (money > 60000) {
		printf("영화\n");
	}
	else if (money <= 60000 && money > 40000) {
		printf("중국집\n");
	}
	else if (money <= 40000 && money > 20000) {
		printf("게임방\n");
	}
	
	else { //이도저도 아닐때, 생략가능
		printf("낮잠\n");
	}
	

	return 0;
}
