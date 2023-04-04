# include <stdio.h>
# include <math.h>

int main(void)
{
	//把三个系数保存到计算机中
	int a = 1;	//=不表示相等,表示赋值
	int b = 2;
	int c = 3;
	double delta;	//delta存放的是 b*b-4*a*C
	double x1;		//x1存放一元二次方程的其中一个解,float可换为double
	double x2;		//x2存放一元二次方程的其中一个解    
	delta = b*b-4*a*c;

	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);

		printf("该一元二次方程有两个不同解,delta=%f,x1=%f, x2=%f\n",delta,x1,x2);

	}
	else if(delta == 0)
	{
		x2 = (-b)/(2*a);
		x1=x2;

		printf("该一元二次方程有两个相同解,X1 = X2 = %f,\n",x1);
	}
	else
	{
		printf("该一元二次方程无解,delta=%f\n",delta);
	}

	return 0;
}