# include <stdio.h>

int main(void)
{
	int i, j, k;
    
//	scanf("%d %d %d", &i, &j, &k);
	printf("请输入三个值，中间以逗号隔开：");  // 空格与逗号的区别
	scanf("%d,%d,%d",&i, &j, &k);
	printf("i = %d, j = %d, k = %d\n", i, j, k);


	return 0;
}


