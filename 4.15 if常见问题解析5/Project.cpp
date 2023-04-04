/*
	2023-04-04 21:22:24
	if-else语句省去else
*/
# include <stdio.h>

int main(void)
{
	float score; //score分数

	printf("请输入您的考试成绩：");
	scanf("%f", &score);

	if (score > 100)
		printf("这是做梦\n");
	else if (score >= 90 && score <= 100) //不能写成 90<=score<=100,此时无论score为多少逻辑值为1
		printf("优秀!\n");
	else if (score >=80 && score < 90)
		printf("良好!\n");
	else if (score >=60 && score < 80)
		printf("及格!\n");
	else (score >=0 && score <60);  //if不能省，会出错
		printf("不及格! 继续努力！\n");
//	else
//		printf("输入的分数过低，不要如此自卑!\n");

	return 0;
}

/*
---------------
	总结：
5. if （表达式1）
		A;
   else if （表达式2）
		B;
   else if (表达式3)
		C;
   else （表达式4）//7行
		D；
   这样写是不对的，正确的写法是：
		不能组成一个语句
		要么去掉7行的表达式4，
		要么在7行的else 后加上if
6. if （表达式1）
		A;
   else if （表达式2）
		B;
   else if (表达式3)
		C;
   else （表达式4）；//7行 无实际意义的语句
		D；
   7行表达式为无实际意义的语句
   else （表达式4）；//7行
		D；
	等价于
	else （表达式4）；//7行
	D；

---------------
*/