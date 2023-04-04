# include <stdio.h>

int main(void)
{
	int i = 33;

    printf("哈哈!\n");  //\n表示换行
	printf("i = %o\n", i);  //d十进制 o是八进制

	int j = 3;
	int k = 5;

	printf("%d %d\n", j, k);  //写法正确
	printf("%d\n", j, k);  //error 输出控制符和输出参数个数不匹配
	
	return 0;

}