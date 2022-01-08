#include<stdio.h> 

int global = 0;

int main() {

	short z;  
	z = 1013;

	printf("³ª¾ß\n"); 

	printf("z = %d\n ", z);
	


	char d = 5;

	printf("%c\n", d);

	float e = 1.2f; 

	double f = 3.4;

	printf("e= %f, f=%lf\n", e, f);

	unsigned short g = 1013;
	unsigned long h = 20210702;
	unsigned int  i = 19950719;

	printf("g = %d, h = %lu\n, i = %u", g, h, i);


	return 0;
}