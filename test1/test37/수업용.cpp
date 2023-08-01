#include <stdio.h>

int main(void)
{
	char a = 'A';
	char b = 'B';

	char* const p = &a; //메모리 공간의 주소를 저장하지 못하게 한다. p=&a를 상수화

	*p = 'C';
	printf("%c \n", *p);
	printf("%c \n", a);

	//p = &b;를 삽입하면 에러 뜸

	return 0;
}