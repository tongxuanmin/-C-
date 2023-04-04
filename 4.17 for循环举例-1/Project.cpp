/*
	2023-04-04 22:19:46
	求1到100之间所有奇数的和
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=1; i<100; i+=2)	//i+=2;	等价于i = i + 2;
	{
		sum = sum + i;
		//printf("我今天很高兴\n");
	}

	printf("sum = %d i = %d\n", sum, i);

	return 0;
}