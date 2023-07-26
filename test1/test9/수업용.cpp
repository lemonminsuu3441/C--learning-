#include <stdio.h>

int main(void)
{
	int array[3] = { 87,99,80 };
	int total = 0;

	total = array[0] + array[1] + array[2];
	printf("총점은 %d이고 ", total);
	printf("평균은 %.2lf입니다. \n", (double)total / 3);

	return 0;
}