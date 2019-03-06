int c3_3()
{
	//百钱百鸡问题
	int a,b,c;
	int i,j,k;
	int t,q;

	for(a=0;a<=100/5;a++)
	{
		for(b=0;b<=100/3;b++)
		{
			for(c=0;c<=100;c++)
			{
				t = a+b+c;
				q = 15*a+9*b+c;
				if(q==300&&t==100)
				{
					printf("Right result is %d GJ %d MJ %d XJ\n",a,b,c);
				}
			}
		}
	}
}