# include <stdio.h>

int main(void)
{
	if (3 > 2)
	{
		printf("AAAA\n");//���÷�Χ
		printf("BBBB\n");

	}
	if (1 > 2)
		printf("CCCC\n");//���÷�Χ
	printf("DDDD\n");


	return 0;
}

/*
------------------------
��VC++6.0�е��������ǣ�
BBBB
------------------------
	�ܽ᣺
		ifĬ�ϵ�ֻ�ܿ���һ������ִ�л�ִ��,if���ƶ�������Ҫ{}������
*/