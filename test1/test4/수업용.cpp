#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	
	printf("C ��� ���� �Է� : ");
	scanf("%d", &num);

	if (num >= 95)
		printf("A+�Դϴ�. \n");

	if (num >= 90)
		printf("A�Դϴ�. \n");

	if (num >= 85)
		printf("B+�Դϴ�. \n");

	if (num >= 80)
		printf("B�Դϴ�. \n");

	else
		printf("F�Դϴ�. \n");

	return 0;
}