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
	else (score >=0 && score <60);  //if����ʡ�������
		printf("������! ����Ŭ����\n");
//	else
//		printf("����ķ������ͣ���Ҫ����Ա�!\n");

	return 0;
}

/*
---------------
	�ܽ᣺
5. if �����ʽ1��
		A;
   else if �����ʽ2��
		B;
   else if (���ʽ3)
		C;
   else �����ʽ4��//7��
		D��
   ����д�ǲ��Եģ���ȷ��д���ǣ�
		�������һ�����
		Ҫôȥ��7�еı��ʽ4��
		Ҫô��7�е�else �����if
6. if �����ʽ1��
		A;
   else if �����ʽ2��
		B;
   else if (���ʽ3)
		C;
   else �����ʽ4����//7�� ��ʵ����������
		D��
   7�б��ʽΪ��ʵ����������
   else �����ʽ4����//7��
		D��
	�ȼ���
	else �����ʽ4����//7��
	D��

---------------
*/