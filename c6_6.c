//字符串结合指针计算字符串长度
int strlen(char *a) //这里注意传入的是char *a 不是 char *a[](这是个指针数组做参数了)
{
	int len = 0;

	for(;*a!='\0';len++,a++); //相当厉害的一个循环,千万别忘了要加分号结束这个for循环,不要包括下面的return

	return len;
}

//字符串的比较
int strcmp(char *s,char *t)
{
	for(;(*s==*t) && (*s != '\0') && (*t != '\0'); s++,t++);

	return *s-*t;
}

//字符串的赋值
int strcpy1(char *s,char *t)
{
	while((*s = *t) != '\0')
	{
		s++;
		t++;
	}
}

//输入若干单词并按大小排序输出

int c6_6()
{
	char buf[32], *p;

	char *word[64];

	int index,i,j,min;

	index = 0;

	while(1)
	{
		gets(buf);

		if(strlen(buf) == 0)
		{
			break;
		}
		word[index] = (char*)malloc(strlen(buf)+1);

		strcpy1(word[index++],buf);
	}
	for(i=0;i<index;i++)
		{
			min = i;

			for(j = i+1;j<index-1;j++) //这里只能比较到index-1 因为最后一位是固定的'\0'
			{
				if(strcmp(word[j],word[min])<0)

					min = j;
			}
			if(min!=i)
			{
				p = word[i];

				word[i] = word[min];

				word[min] = p;
			}
		}

	for(i=0;i<index;i++)
		{
			puts(word[i]);

			free(word[i]);
		}
}

