int c1_8()
{
	//三位数字反转输出
	int d1,d2,d3,value;
	printf("Enter an integer<100~999>");
	scanf("%d" , &value);
	d1 = value/100;
	d2 = value%100/10;
	d3 = value%10;
	putchar('\n');
	printf("Integer reverse is %d%d%d", d3,d2,d1);
} 