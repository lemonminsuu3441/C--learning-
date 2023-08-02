#include <stdio.h>

void plus(int* a)
{
	*a += 1;
}

int main()
{
	int a = 1;
	plus(&a);
	printf("%d", a);

	return 0;
}