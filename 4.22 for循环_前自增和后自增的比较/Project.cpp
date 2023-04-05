# include <stdio.h>

int main(void)
{
	int i, j, k, m;

	i = j = 3;	//等价于 i = 3；j = 3;
	k = i ++;
	m = ++ j;

	printf("i = %d j = %d k = %d m = %d\n", i, j, k, m);

	return 0;
}
/*
在VC++6.0中的输出结果是：
------------------------
i = 4 j = 4 k = 3 m = 4
------------------------
	总结：
	前自增整体表达式的值是i加一之后的值
	后自增整体表达式的值是i加一之前的值
*/