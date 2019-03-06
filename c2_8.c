int c2_8()
{
	//绘制星号三角形问题
	int n,i,row;
	row = 1;
	printf("Enter an number: \n");
	scanf("%d", &n);
	if(n<0)
	{
		printf("this is a wrong number!\n");
	}
	else
	{
		while(row<=n)
		{
			for(i=1;i<=(n-row);i++)
			{
				putchar(' ');
			}
			for(i=1;i<=row;i++)
			{
				putchar('*');
				if(i!=row)
				putchar(' ');
			}
			putchar('\n');
			row+=1;
		}
	}
}