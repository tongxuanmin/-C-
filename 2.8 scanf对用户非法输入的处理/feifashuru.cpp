/*
  2023-03-21 22:21:57
  Ŀ�ģ�
      ���û��Ƿ��������ʵ�����
*/
# include <stdio.h>

int main(void)
{
	int i;
	char ch;

	scanf("%d", &i);
	printf("i = %d\n", i);  //�������ж��scanf,����Ƿ��ַ�ʱ�����

	//......
	while ( (ch=getchar()) != '\n')  //�û�ǰ�������зǷ�������Զ����
		continue;
	int j;
	scanf("%d", &j);
	printf("j = %d\n", j);

	return 0;
}

/*
  ��VC++6.0�е��������ǣ�
--------------------------

123v
i = 123
j = -858993460
Press any key to continue

123d
i = 123
123h
j = 123
Press any key to continue
--------------------------
  �ܽ�:

*/
