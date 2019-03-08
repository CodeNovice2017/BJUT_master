int c3_6()
{
	//分解整数问题
	long x,y;
	
	int n = 1;

	printf("Input an integer:\n");

	scanf("%ld",&x);

	y = x;

	while(y>10)
	{
		n *= 10;

		y = y / 10;
	}
	
	do{
		printf("%ld\n",x/n);

		x %= n;

		n /= 10 ;

	}while(n >= 1);
}