#include <stdio.h>

int main(void)
{
	char a = 'A';
	char b = 'B';

	char* const p = &a; //�޸� ������ �ּҸ� �������� ���ϰ� �Ѵ�. p=&a�� ���ȭ

	*p = 'C';
	printf("%c \n", *p);
	printf("%c \n", a);

	//p = &b;�� �����ϸ� ���� ��

	return 0;
}