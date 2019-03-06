#include <stdio.h>
int c2_3()
{
	//四则运算直接输入问题
	float x1, x2, r;
	char c;
	printf("Enter like \'2 + 3\' :\n");
	scanf("%f %c %f", &x1, &c, &x2);
	switch (c)
	{
	case '+':
		r = x1 + x2;
		break;
	case '-':
		r = x1 - x2;
		break;
	case '*':
		r = x1 * x2;
		break;
	case '/':
		r = x1 / x2;
		break;
	default:
		printf("Tnpur Error\n");
		return 0;
	}
	printf("%f %c %f = %f", x1, c, x2, r);
}