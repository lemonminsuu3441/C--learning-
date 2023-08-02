#include <stdio.h>

int main()
{
	int i = 3;
	int& a = i;

	printf("%d %x", i, &a);

	return 0;
}