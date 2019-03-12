int c6_7()
{
	int *d[10];
	
	int i,j;
	
	int x = 1;
	
	a[0] = &x;

	for(i=1;i<10;i++)
	{
		a[i] = (int*)malloc(sizeof(int)*(i+1));

		*a[i] = 1;

		for(j = 1;j < i ; j++)
		{
			
		}
	}
}