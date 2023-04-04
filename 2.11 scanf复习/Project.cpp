/*	2023-04-04 11:20:49
	第四课复习，scanf,运算符
*/
# include <stdio.h>

int main(void)
{
	int i, j;

	printf("请输入i j的值,中间以空格隔开:");
	scanf("%d %d", &i, &j);
	printf("i = %d, j = %d\n",i, j);

	return 0;
}