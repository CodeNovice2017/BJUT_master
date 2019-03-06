int c1_6()
{
	//弧度与角度的转换问题
	int degree;
	float radian;
	
	printf("Enter degree<int>:");
	scanf("%d", degree);
	radian = (3.1415926*degree)/180;
	printf("%d degree equal to %f radians.", degree,radian);
}