//�ݹ麯��֮ȫ���е�ʵ��
void anagram(int d[], int n)
{
	int i,j,temp;

	if(n==1)
	{
		print(d);
		return;
	}
	for(i = 0;i < n; i++)
	{
		anagram(d,n-1);

		temp = d[0];

		for(j = 1; j<=n-1;j++)
		{

			d[j-1] =  d[j];
  
		}

		d[n-1] = temp;
	}
} 

int print(int d[]) //���ﲻ�����Լ�һ������n,�������Ҳ��Ҫ��anagram�Ĳ���n��ͬ,�����԰�anagram��n��Ϊ��������print  Ҳ���ܽ�int�����͸�Ϊvoid ����ִ���c2371
{
	int i;

	int n = 3;

	printf("\n");

	for(i = n-1; i>=0;i--)
	{
		printf("%d",d[i]); 
	}
}

void c5_7()
{
	int n = 3;

	int i;

	int d[3]; //����ǵ�int d[]������������λ���κκ�������,ֻ����ǰ���������б���,����ͻ���ִ���

	for(i=0;i<n;i++)
	{
		d[i] = n-i;
	}

	anagram(d,n);
}