/*
	2023-04-05 13:29:57
	求1-100之间 奇数的个数，所有奇数的平均值，奇数之和，偶数之和
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0, odd_sum = 0, even_sum = 0, odd_cnt = 0;	//个数一般用cnt表示
	float odd_average;
	
	for (i=1; i<=100; ++i)
	{
		sum += i;	//sum = sum + i;
		if (i%2 == 1)
		{
			odd_cnt ++;
			odd_sum += i;	//odd_sum = odd_sum + i;
			
			//printf("i = %d   odd_sum = %d   odd_cnt = %d\n", i, odd_sum, odd_cnt);
		}
		else
			even_sum += i;	//even_sum = even_sum + i;
	}
	odd_average = 1.0*odd_sum / odd_cnt;	//1.0默认是double类型,%f不要忘记改

	printf("\ni = %d odd_cnt = %d odd_average = %f odd_sum = %d even_sum = %d sum = %d\n", i, odd_cnt, odd_average, odd_sum, even_sum, sum);
	
	return 0;
}
/*
--------------------
在VC++6.0中的输出结果是：

i = 101 odd_number = 50 odd_average = 50 odd_sum = 2500 even_sum = 2550 sum = 5050
--------------------
*/
