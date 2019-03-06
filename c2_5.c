#include <stdio.h>

int c2_5()
{
	int ch ,num = 0;
	do
	{
		ch = getchar();
		if('9' >= ch && ch >= '0')
		{
			num++;
		}
	}while(ch != '\n');

	printf("num is %d", num);

}