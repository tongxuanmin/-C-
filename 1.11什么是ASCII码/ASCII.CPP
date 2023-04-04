# include <stdio.h>

int main(void)
{
	char ch = 'A';
//	char ch = 'AB';  //error 因为“AB”是字符串，我们不能把字符串赋给单个字符
//    char ch = "A";  //error 因为双引号内是字符串
//    char ch = 'AB';  //error
//	char ch = 'B';  //error 因为重复定义
	ch = 'C';
	ch = 'D';

	printf("%c\n", ch);

	return 0;

}