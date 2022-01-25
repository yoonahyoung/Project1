#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


typedef struct tagStudent {   // 사용자 정의 데이타 타입, main안에 들어가도 되긴 하는데
					// 그 안에서만 사용할 수 있으니까 위에다 한것.
	char name[100];   // 구조체 멤버
	int classNum;
	int num;
}Student;

//typedef struct tagStudent Student;


int main() {
	Student array[3];

	for (int i = 0; i < 3; i++) {
		printf("학생 정보를 입력하세요(이름 반 번호)");
		scanf("%s %d %d", array[i].name, &array[i].classNum, &array[i].num);
	}

	for (int i = 0; i < 3; i++) {
		printf("이름 %s, 반: %d, 번호: %d\n", array[i].name, array[i].classNum, array[i].num);
	}




	return 0;
}
