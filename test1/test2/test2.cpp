#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, factorial;

	printf("1���� n���� �� ���� ���մϴ�. ���� n��?");
	scanf("%d", &n);

	// 1~n�� ���� n!�� factorial�� ���ϱ�
	factorial = 1;
	i = 1;
	while(i <= n)
	{
		factorial *= i;
		i++;
	}

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, factorial);

	return 0;
}