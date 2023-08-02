#include <stdio.h>

int main(void)
{
	char a = 'A';
	char b = 'B';

	const char* const p = &a; //메모리 공간의 조수와 값 모두 저장하지 못하게 한다.

	printf("%c \n", *p);
	printf("%c \n", a);

	a = 'X';
	b = 'C';

	printf("%c \n", a);
	printf("%c \n", b);

	//이 두곳에서 에러 뜸
	//p = &b;
	//*p = 'D';

	return 0;
}