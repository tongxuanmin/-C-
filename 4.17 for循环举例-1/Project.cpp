/*
	2023-04-04 22:19:46
	��1��100֮�����������ĺ�
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=1; i<100; i+=2)	//i+=2;	�ȼ���i = i + 2;
	{
		sum = sum + i;
		//printf("�ҽ���ܸ���\n");
	}

	printf("sum = %d i = %d\n", sum, i);

	return 0;
}