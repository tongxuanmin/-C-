# include <stdio.h>

int main(void)
{
	if (3 > 2)
	{
		printf("AAAA\n");//作用范围
		printf("BBBB\n");

	}
	if (1 > 2)
		printf("CCCC\n");//作用范围
	printf("DDDD\n");


	return 0;
}

/*
------------------------
在VC++6.0中的输出结果是：
BBBB
------------------------
	总结：
		if默认的只能控制一个语句的执行或不执行,if控制多个语句需要{}括起来
*/