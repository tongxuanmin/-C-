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
	else if (score >=0 && score <60)
		printf("不及格! 继续努力！\n");
//	else
//		printf("输入的分数过低，不要如此自卑!\n");

	return 0;
}