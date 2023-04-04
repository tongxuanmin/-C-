# include <stdio.h>

int main(void)
{
	int i, j;
	char ch;
	
	printf("请输入i j的值，中间以空格隔开:");
	scanf("%d %d", &i, &j);
	printf("i = %d, j = %d\n", i, j);

	return 0;
}