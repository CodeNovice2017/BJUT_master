int c3_4()
{
	//等比数列递推求和
	int sum, item;

	int n,q,a1;

	int i;

	printf("Please input a1 q and n:\n");

	scanf("%d %d %d",&a1,&q,&n);

	sum = a1;

	item = a1; //记住item要么就附上初值,要么就不用item,直接用a1;

	for(i = 1; i<n; i++)
	{
		item = item*q;

		sum += item;
	}

	printf("Sum of %d items is %d\n",n ,sum);

}