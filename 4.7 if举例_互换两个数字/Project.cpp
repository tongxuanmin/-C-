# include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 5;
	int temp; //������ʱ����


//6��7�д����޷����i��j�Ļ���
//	i = j;  //6��   i = 5, j = 5
//	j = i;  //7��   i = 5, j = 5
	
	//��ȷ�Ļ�������
	temp = i;
	i = j;
	j = temp;

	printf("i = %d, j = %d\n", i, j);

	return 0;
}