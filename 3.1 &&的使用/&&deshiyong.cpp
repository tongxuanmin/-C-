/*
  2023-03-21 23:19:39
  目的：
      逻辑运算符&&的用法
*/

# include <stdio.h>

int main(void)
{
	int i = 10;
	int k = 20;
	int m = 0;

	m = (3>2) || (k=8);	//不含有分号的是表达式，含有分号的是语句
	printf("m = %d, k = %d\n", m, k);
	return 0; 
}

/*
  在VC++6.0中的输出结果是：
--------------------------

m = 1, k = 20
Press any key to continue
--------------------------
  总结:

*/
