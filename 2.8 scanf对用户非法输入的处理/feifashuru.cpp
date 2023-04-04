/*
  2023-03-21 22:21:57
  目的：
      对用户非法输入做适当处理
*/
# include <stdio.h>

int main(void)
{
	int i;
	char ch;

	scanf("%d", &i);
	printf("i = %d\n", i);  //若后续有多个scanf,输入非法字符时会出错

	//......
	while ( (ch=getchar()) != '\n')  //用户前面输入有非法输入可自动清除
		continue;
	int j;
	scanf("%d", &j);
	printf("j = %d\n", j);

	return 0;
}

/*
  在VC++6.0中的输出结果是：
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
  总结:

*/
