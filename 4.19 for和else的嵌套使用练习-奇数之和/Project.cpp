/*
	2023-04-05 13:29:57
	��1-100֮�� �����ĸ���������������ƽ��ֵ������֮�ͣ�ż��֮��
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0, odd_sum = 0, even_sum = 0, odd_cnt = 0;	//����һ����cnt��ʾ
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
	odd_average = 1.0*odd_sum / odd_cnt;	//1.0Ĭ����double����,%f��Ҫ���Ǹ�

	printf("\ni = %d odd_cnt = %d odd_average = %f odd_sum = %d even_sum = %d sum = %d\n", i, odd_cnt, odd_average, odd_sum, even_sum, sum);
	
	return 0;
}
/*
--------------------
��VC++6.0�е��������ǣ�

i = 101 odd_number = 50 odd_average = 50 odd_sum = 2500 even_sum = 2550 sum = 5050
--------------------
*/
