//采用冒泡排序实现的对结构体类型数组进行排序和原位置的输出
//还是要注意三个函数都不能用void类型c2371
typedef struct Line{
	int value;
	int position;
}INTEGER;
int c6_2()
{
	int NUM = 10;

	INTEGER s[10];

	InputInfo(s,NUM);
	Sort(s,NUM);
	PrintInfo(s,NUM);
}

int PrintInfo(INTEGER s[],int NUM)
{
	int i;
	for(i=0;i<NUM;i++)
	{
		printf("%4d",s[i].value);
	}
	printf("\n");
	for(i=0;i<NUM;i++)
	{
		printf("___%d",s[i].position);
	}
	
}

int InputInfo(INTEGER s[],int NUM)
{
	int i;
	printf("Please input 10 integers:\n");
	for(i = 0; i<NUM; i++)
	{
		scanf("%d",&s[i].value);
		s[i].position = i+1;
	}
}

int Sort(INTEGER s[],int NUM)
{
	int i,j,flag;
	INTEGER d;
	for(i=NUM-1;i>=1;i--)
	{
		flag = 0;
		for(j=1;j<=i;j++)
		{
			if(s[j-1].value>s[j].value)
			{
				d = s[j-1];
				s[j-1] = s[j];
				s[j] = d;
				flag = 1;
			}
		}
		if(flag == 0)
		{
			break;
		}
	}
}