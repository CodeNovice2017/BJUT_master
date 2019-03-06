int c1_9()
{
	//四个数字字符拼成一个int类型数值
	char d1,d2,d3,d4;
	int value;
	printf("Enter 4 numbers:");
	d1 = getchar();
	d2 = getchar();
	d3 = getchar();
	d4 = getchar();
	value = (d1-'0')*1000 + (d2-'0')*100 + (d3-'0')*10 + (d4-'0');
	printf("The value is %d", value);
}