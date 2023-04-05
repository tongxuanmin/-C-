/*
	2023-04-05 13:44:05
	求1 + 1/2 + 1/3 + 1/4 + ... + 1/100
*/
# include <stdio.h>

int main(void)
{
	int i;
	float sum = 0;

	for (i=1; i<=100; ++i)
	{
		sum = sum + 1.0/i;		//这样写是OK的
			//sum = sum + (float)(1/i);	这样写是不对的
			//也可以这样写：sum = sum + 1/(float)(i);  不推荐
	}
	printf("sum = %f\n", sum);	//float 必须用%f输出

	return 0;
}
/*
-------------------------
试数详细步骤举例：
1->	i=1 1<1=100 成立
	sum=0+1.0/1=1	++i i=2
2-> i=2 2<=100 成立
	sum=1+1.0/2     ++i i=3
3-> i=3 3<=100 成立
	sum=1+1.0/2+1.0/3 ++i i=4
4-> i=4 4<=100 成立
	sum=1+1.0/2+1.0/3+1.0/4 ++i i=5
..............................
-------------------------
*/