#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	printf("(T)hursday, (F)riday, (S)aturday \n");
	printf("���� �Է�(T, F, S) : ");
	scanf("%c", &ch);

	switch (ch)
	{
		case 'T':
		case't':
			printf("Thursday \n");
			break;

		case'F':
		case'f':
			printf("Friday \n");
			break;

		case'S':
		case's':
			printf("Saturday \n");
			break;

		default:
			printf("�߸� �ԷµǾ����ϴ�. \n");
	}

	return 0;
}