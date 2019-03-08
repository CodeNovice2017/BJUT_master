#define NUM 26

int c4_2()
{
	//统计一行字符的各字母出现频率

	int i,num = 0;

	int c[NUM] = {0};

	char ch;

	printf("Please input text line:\n");

	while((ch = getchar()) != '\n')
	{
		num++;

		if('A'<=ch && ch<='Z')
		{
			c[ch-'A'] = c[ch-'A'] + 1; //检测是否为大写字母 这个方法要记住
		}
		else if('a'<=ch && ch<='z')
		{
			c[ch-'a'] = c[ch-'a'] + 1;
		}

	}

	for(i=0;i<26;i++)
	{
		printf("%d个字符中,%c共占%d个.\n",num,('A'+i),c[i]);

	}
}