#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("�� �� ����ġ�� �����ðڽ��ϱ�? ");
	scanf("%d", &num);

	switch (num)
	{
		case 1:
			printf("������ ���� \n");
			break;

		case 2:
			printf("������ ���� \n");
			break;

		case 3:
			printf("���� \n");
			break;

		default:
			printf("����ġ ���� : �츮�� ����ġ�� 1�� ~ 3�������� �ֽ��ϴ�. \n");

	}

	return 0;
}