# include <stdio.h>

int main(void)
{
	int i;
	int j = 2;

	i = (j++, ++j, j+2, j-2);
	printf("%d\n", i);

	return 0;

}