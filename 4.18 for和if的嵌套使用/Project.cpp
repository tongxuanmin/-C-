/*
	2023-04-05 10:22:43
	求1到100之间所有的能被三整除的数字之和
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for (i=1; i<=100; ++i)
	{
		if (i%3 == 0)  //如果i能被3整除
		{
			sum = sum + i;
			//printf("i = %d  ", i);
			//printf("sum = %d\n", sum);
		}
	}
	//printf("i = %d\n", i);
	printf("sum = %d\n", sum);

	return 0;
}
/*
-----------------------
在VC++6.0中的输出结果是：
i = 3  sum = 3
i = 6  sum = 9
i = 9  sum = 18
i = 11
sum = 18
-----------------------
	总结：
		看懂流程
		知道每个语句功能
		试数
*/