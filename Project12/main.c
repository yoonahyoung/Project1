#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {  //if-else if문은 참인지 다 따지면서 위에서 내려오는 반면
         //switch case 문은 입력된 값에 따라 이동하고 없다면 바로 디폴트 값으로 보냄

	int buttonNum = 0;

	printf("리모트컨트롤의 버튼을 입력하세요: ");
	scanf("%d", &buttonNum);
	
	switch (buttonNum) { //의도적으로 break를 빼서 원하는 정수를 걸리게 할 수 있음
	case 0:
	case 5:
	case 8:
		printf("TV On\n");
		break;

	case 1:
	{//switch-case에서는 변수를 선언할거면 {}블럭을 꼭 넣어서 선언해야함
		int b = 20;
	}
		printf("TV Off\n");
		break;

	case 2:
		printf("volumnUP\n");
		break;

	case 3:
		printf("volumnDown\n");
		break;

	default:

		printf("버튼을 잘못 누르셨습니다.\n");

		break;

	}
	//만약 if문을 사용하면 가독성이 떨어진다
	int value = 1;

	if (buttonNum == 0) {

	}
	else if (buttonNum == 1) {

	}
	else if (buttonNum == 2) {

	}
	else if (value == 1) {

	}
	else if (value == 2) {

	}

	//위에 있는 if문을 switch-case문으로 변경한다면?
	switch (buttonNum) {
	case 0:
		break;

	case 1:

		break;

	case 2:

		break;
	default:
	{//value값은 if로 들어가줌
		if (value == 1) {

		}
		else if (value == 2) {

		}

		switch (value) {//그리고 switch-case문 안에 또 넣을 수 있음
		case 1:
			break;

		case 2:
			break;
		}
	}
	break;
	}




	return 0;
}
