#define NUM 26

int c4_2()
{
	//ͳ��һ���ַ��ĸ���ĸ����Ƶ��

	int i,num = 0;

	int c[NUM] = {0};

	char ch;

	printf("Please input text line:\n");

	while((ch = getchar()) != '\n')
	{
		num++;

		if('A'<=ch && ch<='Z')
		{
			c[ch-'A'] = c[ch-'A'] + 1; //����Ƿ�Ϊ��д��ĸ �������Ҫ��ס
		}
		else if('a'<=ch && ch<='z')
		{
			c[ch-'a'] = c[ch-'a'] + 1;
		}

	}

	for(i=0;i<26;i++)
	{
		printf("%d���ַ���,%c��ռ%d��.\n",num,('A'+i),c[i]);

	}
}