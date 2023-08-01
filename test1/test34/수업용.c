#include <stdio.h>

int main(void)
{
	char array[] = "ABCD";
	char* p = "ABCD";

	//p[0] = 'X';
	array[0] = 'X';

	p = array;
	//array = array + 1;
	printf("%s \n", p);
	printf("%s \n", array);

	return 0;
}