# include <stdio.h>
# include <math.h>

int main(void)
{
	//������ϵ�����浽�������
	int a = 1;	//=����ʾ���,��ʾ��ֵ
	int b = 2;
	int c = 3;
	double delta;	//delta��ŵ��� b*b-4*a*C
	double x1;		//x1���һԪ���η��̵�����һ����,float�ɻ�Ϊdouble
	double x2;		//x2���һԪ���η��̵�����һ����    
	delta = b*b-4*a*c;

	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);

		printf("��һԪ���η�����������ͬ��,delta=%f,x1=%f, x2=%f\n",delta,x1,x2);

	}
	else if(delta == 0)
	{
		x2 = (-b)/(2*a);
		x1=x2;

		printf("��һԪ���η�����������ͬ��,X1 = X2 = %f,\n",x1);
	}
	else
	{
		printf("��һԪ���η����޽�,delta=%f\n",delta);
	}

	return 0;
}