/*
	2023-04-04 17:07:19
	一定要明白程序调试为何会出错
*/
# include <stdio.h>

int main(void)
{
	double delta = 3;

	if (delta > 0)
	{	printf("有两个解！\n");
		printf("哈哈哈哈\n");
	}
	else if (delta == 0)
		printf("有两个相同解!\n");
	else
		printf("无解!\n");

	return 0;
}