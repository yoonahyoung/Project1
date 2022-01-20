#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//실패한 연습. switch-case문에 break가 걸리지 않으면 순차적으로 내려온다는 것을 몰랐음. 
//ㅋㅋ 노가다 ㅠ

int main() {
	int Num = 0;

	printf("★재미로 알아보는 나에게 맞는 자동차 유형!★\n");
	
	printf("\n● 나는 세차를 할 때 기계식 세차장을 애용한다. \n Yes -> 1  /  No -> 3      입력: ");
			scanf("%d", &Num);
			/*f(&Num == 2 || &Num > 3) {
					printf("\n버튼을 잘못 누르셨습니다.");
					printf("\n다시 입력해 주세요 : ");
					
					}scanf("%d", &Num);*/

	switch (Num) {

		case 1:
			printf("\n● 자동차에 문제가 생기면 직접 뜯어본다.\n Yes -> 4   /  No -> 2      입력 : ");
			scanf("%d", &Num);
			
		case 2:
			printf("\n● 무엇을 사든 항상 최신 제품을 고집한다.\n Yes -> 4   /  No -> 5      입력 : ");
			
			scanf("%d", &Num);
		case 3:
			printf("\n● 국도보다는 뻥 뚫린 고속도로가 좋다.\n Yes -> 6   /  No -> 7      입력 : ");
			
			scanf("%d", &Num);
		case 4:
			printf("\n● 왁지지껄한 것보다 혼자만의 시간을 더 선호한다.\n Yes -> 3   /  No -> 7      입력 : ");
			
			scanf("%d", &Num);
		case 5:
			printf("\n● 게으르다는 소리를 종종 듣는다.\n Yes -> 8    /  No -> 4       입력 : ");
			
			scanf("%d", &Num);
		case 6:
			printf("\n● 친구들이 내게 '자동차랑 사귀냐?'고 물어보곤 한다.\nYes -> 9   /  No -> 7     입력 : ");
			
			scanf("%d", &Num);
		case 7:
			printf("\n● 바닷가보다는 굽이굽이 살긴이 더 신난다.\nYes -> 10   /  No -> 11     입력 : ");
			
			scanf("%d", &Num);
		case 8:
			printf("\n● 자동차는 모름지기 실내가 넓어야 한다.\nYes -> 11   /  No -> 7      입력 : ");
			
			scanf("%d", &Num);
		case 9:
			printf("\n● 앞 차로부터 튀는 돌을 맞기 싫어서 항상 멀리 떨어진다.\nYes -> A타입   /  No -> B타입");
			
			scanf("%d", &Num);
		case 10:
			printf("\n● 도로 위에서 나는 늘 남들보다 빠르다.\nYes -> B타입   /  No -> C타입");
			
			scanf("%d", &Num);
		case 11:
			printf("\n● 직접 운전하기 보다 뒷자석에 앉는 것을 더 선호한다.\nYes -> C타입   /  No -> D타입");
			break;
		default: 
			printf("\n버튼을 잘못 누르셨습니다.\n");
			scanf("%d", &Num);
	}



	return 0;
}
