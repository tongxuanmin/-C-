/*
	2023-04-04 21:22:24
	if-else���ʡȥelse
*/
# include <stdio.h>

int main(void)
{
	float score; //score����

	printf("���������Ŀ��Գɼ���");
	scanf("%f", &score);

	if (score > 100)
		printf("��������\n");
	else if (score >= 90 && score <= 100) //����д�� 90<=score<=100,��ʱ����scoreΪ�����߼�ֵΪ1
		printf("����!\n");
	else if (score >=80 && score < 90)
		printf("����!\n");
	else if (score >=60 && score < 80)
		printf("����!\n");
	else if (score >=0 && score <60)
		printf("������! ����Ŭ����\n");
//	else
//		printf("����ķ������ͣ���Ҫ����Ա�!\n");

	return 0;
}