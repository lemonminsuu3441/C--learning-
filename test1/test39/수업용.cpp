#include <stdio.h>

int main(void)
{
	char a = 'A';
	char b = 'B';

	const char* const p = &a; //�޸� ������ ������ �� ��� �������� ���ϰ� �Ѵ�.

	printf("%c \n", *p);
	printf("%c \n", a);

	a = 'X';
	b = 'C';

	printf("%c \n", a);
	printf("%c \n", b);

	//�� �ΰ����� ���� ��
	//p = &b;
	//*p = 'D';

	return 0;
}