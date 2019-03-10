//递归函数学习之阶乘的实现
long factorial_recursive(int n)
{
	if(n==0)
		return 1;
	else
		return n*(factorial_recursive(n-1));
}

//递归函数学习之汉诺塔问题(Hanoi)

void hanoi(int n,char a,char b,char c)
{
	if(n==1)
	{
		printf("Move %c to %c\n",a,c);
	}

	else
	{
		hanoi(n-1,a,c,b); //将原塔座a上的n-1个圆盘通过中间塔座c,移动到目标塔座b上
		printf("Move %c to %c\n",a,c); //将原塔座a的最底下的圆盘,移动到目标塔座c上
		hanoi(n-1,b,a,c); //将b上的n-1个圆盘,通过中间塔座a,移动到c上
	}
}

int c5_5()
{
	char a = 'a';
	char b = 'b';
	char c = 'c';
	hanoi(6,a,b,c);
}