#include <stdio.h>

struct group
{
	int a;
	double b;
};

int main(void)
{
	struct group g1;  //구조체 변수를 개별적으로 선언하는 방법
	
	g1.a = 10;
	g1.b = 1.1234;

	printf("*g1.a의 값 : %d \n", g1.a);
	printf("*g1.b의 값 : %lf \n", g1.b);
	
	return 0;
}