/*
	2023-04-04 21:53:40
	1+2+3+4+...+100
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=1; i<=99; ++i)
		sum = sum + i;

	printf("sum = %d, i = %d\n", sum, i);

	return 0;
}