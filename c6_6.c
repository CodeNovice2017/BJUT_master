//�ַ������ָ������ַ�������
int strlen(char *a) //����ע�⴫�����char *a ���� char *a[](���Ǹ�ָ��������������)
{
	int len = 0;

	for(;*a!='\0';len++,a++); //�൱������һ��ѭ��,ǧ�������Ҫ�ӷֺŽ������forѭ��,��Ҫ���������return

	return len;
}

//�ַ����ıȽ�
int strcmp(char *s,char *t)
{
	for(;(*s==*t) && (*s != '\0') && (*t != '\0'); s++,t++);

	return *s-*t;
}

//�ַ����ĸ�ֵ
int strcpy1(char *s,char *t)
{
	while((*s = *t) != '\0')
	{
		s++;
		t++;
	}
}

//�������ɵ��ʲ�����С�������

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

			for(j = i+1;j<index-1;j++) //����ֻ�ܱȽϵ�index-1 ��Ϊ���һλ�ǹ̶���'\0'
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

