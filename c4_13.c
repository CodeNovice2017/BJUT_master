int c4_13()
{
	//二维数组对应对阵矩阵的判断
	int row = 3, col = 3;
	int i,j;
	int array[10][10];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<i;j++)//点睛 只对下三角元素进行操作对比,利用内层循环的列下标的控制
		{
			if(array[i][j] != array[j][i])
			{
				printf("The matrix is not symmetrical.");

				return 0;
			}

		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%4d",array[i][j]);
		}
		printf("\n"); //点睛 二维数组的输出显示技巧,外层循环控制行下标的变化!
	}

}