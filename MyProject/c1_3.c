#include <stdio.h>
int maxValue(int,int);
void main()
{
	int x, y, z;

	printf("Enter 2 integers:");
	scanf("%d %d", &x,&y);
	z = maxValue(x,y);
	printf("The larger value is %d.\n",z);
}

int maxValue(int x,int y)
{
	int max;
	
	if(x<y)
	{
		max = y;
	}
	else
	{
		max = x;	
	}
	return max;
}