# include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 5;
	int temp; //定义临时变量


//6和7行代码无法完成i和j的互换
//	i = j;  //6行   i = 5, j = 5
//	j = i;  //7行   i = 5, j = 5
	
	//正确的互换方法
	temp = i;
	i = j;
	j = temp;

	printf("i = %d, j = %d\n", i, j);

	return 0;
}