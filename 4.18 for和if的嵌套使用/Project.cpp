/*
	2023-04-05 10:22:43
	��1��100֮�����е��ܱ�������������֮��
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for (i=1; i<=100; ++i)
	{
		if (i%3 == 0)  //���i�ܱ�3����
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
��VC++6.0�е��������ǣ�
i = 3  sum = 3
i = 6  sum = 9
i = 9  sum = 18
i = 11
sum = 18
-----------------------
	�ܽ᣺
		��������
		֪��ÿ����书��
		����
*/