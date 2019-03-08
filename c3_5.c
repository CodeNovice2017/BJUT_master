int c3_5()
{
	//求圆周率 (未成功)
	double item,PI;
	int i,sign;
	sign = 1;
	i = 1;
	PI = 0.0;
	do
	{
		item = 4.0*sign/(2*i-1);
		PI += item;
		sign = -sign;
		i++;
	}while(fabs(item) > 1e-4);

	printf("PI = %lf\n",PI);
	
}