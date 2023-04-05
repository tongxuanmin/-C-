# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

//	for (i=1; i<=100; ++i)
//		sum = sum + i;

	i = 1;
	while (i<=100)
	{
		sum = sum +i;
		++i;
	}

	printf("sum = %d\n", sum);

	return 0;
}