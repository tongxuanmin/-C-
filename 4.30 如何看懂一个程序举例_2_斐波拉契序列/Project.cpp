/*
	2023-04-05 22:10:14
	斐波拉契序列：
	1 2 3 5 8 13 21 34 ...
*/

# include <stdio.h>

int main(void)
{
	int n;
	int f1 = 1, f2 = 2, f3 = 0;
	int i;

	printf("请您输入要显示的序列的项(输入数值必须为正整数)：");
	scanf("%d", &n);

	if (n == 1)
	{
		f3 = 1;
	}
	else if (n == 2)
	{
		f3 = 2;
	}
	else
	{
		for (i=3; i<=n; ++i)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
	}

	printf("第%d项为：%d\n", n, f3);

	return 0;
}

/*
如何看懂一个程序，试数：n = 6
------------------------
1-> i=3 3<=6 成立
	f3=1+2=3
	f1=f2=2
	f2=f3=3
	i=4
2-> i=4 i<=6 成立
	f3=f1+f2=5
	f1=f2=3
	f2=f3=5
	i=5
3-> i=5 i<=6 成立
	f3=f1+f2=8
	f1=f2=5
	f2=f3=8
	i=6
4-> i=6 i<=6成立
	f3=f1+f2=13
	f1=f2=8
	f2=f3=13
	i=7
5-> i=7 i<=6 不成立
    
	f3 = 13
------------------------
*/