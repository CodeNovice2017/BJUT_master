long power(int x,int y)
{
	long p = x;
	int i;
	for(i=0;i<y-1;i++)
	{
		p *= x;
	}
	return p;
}
//函数的模块应用-计算e的多少次方
long factorial_No_recursive(int x)
{
	int n = 1;
	int i;
	for(i = 1; i<=x;i++)
	{
		n = n*i;
	}
	return n;
}
double e(int x)
{
	double result = 1.0, tmp;
	int i = 1;
	do
	{
		tmp = power(x,i)*1.0/factorial_No_recursive(i); //小技巧 关于返回long的power转为double型
		i = i + 1;
		result = result + tmp;
	}while(tmp >= 1e-6);
	return result;
}

int c5_4()
{
	int x;

	printf("Input an integer:\n");
	scanf("%d",&x);
	printf("\n e^%d =  %f", x,e(x));

}