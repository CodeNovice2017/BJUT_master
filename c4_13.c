int c4_13()
{
	//��ά�����Ӧ���������ж�
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
		for(j=0;j<i;j++)//�㾦 ֻ��������Ԫ�ؽ��в����Ա�,�����ڲ�ѭ�������±�Ŀ���
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
		printf("\n"); //�㾦 ��ά����������ʾ����,���ѭ���������±�ı仯!
	}

}