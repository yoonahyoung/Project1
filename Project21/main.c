#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Student {   // 사용자 정의 데이타 타입, main안에 들어가도 되긴 하는데
					// 그 안에서만 사용할 수 있으니까 위에다 한것.
	char name[100];   // 구조체 멤버
	int classNum;
	int num;
};


int main() {
	char name[100];
	int classNum;
	int num;

	strcpy(name, "monster");
	classNum = 11;
	num = 12;

	printf("이름: %s, 반: %d, 번호: %d\n", name, classNum, num);

	/*
	char name0[100];
	char name1[100];
	*/
	/*
	char nameArray[100][100];
	int classNumArray[100];
	int numArray[100];

	strcpy(&nameArray[0][0], "monster1");
	classNumArray[0] = 1;
	numArray[0] = 2;

	strcpy(&nameArray[1][0], "monster1");
	classNumArray[1] = 1;
	numArray[1] = 2;
	*/

	struct Student a;
	a.classNum = 10;
	a.num = 50;
	strcpy(a.name, "monster1");

	printf("이름: %s, 반: %d, 번호: %d\n", a.name, a.classNum, a.num);



	return 0;
}
