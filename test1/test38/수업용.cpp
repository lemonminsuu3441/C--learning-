#include <stdio.h>

int main(void)
{
	char a = 'A';
	char b = 'B';

	const char* p = &a; //메모리 공간의 값을 저장하지 못하게 한다. *p를 상수화

	printf("%c \n", *p);
	printf("%c \n", a);

	p = &b;
	printf("%c \n", *p);
	printf("%c \n", b);

	a = 'X';
	b = 'C';
	//*p = 'D';에서 에러 뜸

	return 0;
}