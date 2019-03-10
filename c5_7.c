//递归函数之全排列的实现
void anagram(int d[], int n)
{
	int i,j,temp;

	if(n==1)
	{
		print(d);
		return;
	}
	for(i = 0;i < n; i++)
	{
		anagram(d,n-1);

		temp = d[0];

		for(j = 1; j<=n-1;j++)
		{

			d[j-1] =  d[j];
  
		}

		d[n-1] = temp;
	}
} 

int print(int d[]) //这里不能擅自加一个参数n,可以添加也是要和anagram的参数n不同,不可以把anagram的n作为参数传给print  也不能将int返回型改为void 会出现错误c2371
{
	int i;

	int n = 3;

	printf("\n");

	for(i = n-1; i>=0;i--)
	{
		printf("%d",d[i]); 
	}
}

void c5_7()
{
	int n = 3;

	int i;

	int d[3]; //这里记得int d[]的声明绝不能位于任何函数后面,只能提前声明完所有变量,否则就会出现错误

	for(i=0;i<n;i++)
	{
		d[i] = n-i;
	}

	anagram(d,n);
}