# include <stdio.h>

int main(void)
{
	int i = 33;

    printf("����!\n");  //\n��ʾ����
	printf("i = %o\n", i);  //dʮ���� o�ǰ˽���

	int j = 3;
	int k = 5;

	printf("%d %d\n", j, k);  //д����ȷ
	printf("%d\n", j, k);  //error ������Ʒ����������������ƥ��
	
	return 0;

}