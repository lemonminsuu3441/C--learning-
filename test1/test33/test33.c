#include <stdio.h>

int main(void)
{
	char* p = "ABCD";

	printf("%s \n", p);
	printf("%s \n", p + 1);
	printf("%s \n", p + 2);
	printf("%s \n", p + 3);

	return 0;
}