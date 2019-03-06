int c3_1()
{
	//二次方程求解
	int a,b,c,t,t0;
	printf("Please enter 3 numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	t = (b*b)-(4*a*c);
	t0 = sqrt((double)t);
	if(t>0)
	{
		printf("result is %lf and %lf",(-b+t0)/(2*a),(-b-t0)/(2*a));
	}
	else if(t==0)
	{
		printf("result is %lf",(-b)/(2.0*a));
	}
	else if(t<0)
	{
		printf("no!");
	}


}
