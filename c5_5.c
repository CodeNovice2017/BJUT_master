//�ݹ麯��ѧϰ֮�׳˵�ʵ��
long factorial_recursive(int n)
{
	if(n==0)
		return 1;
	else
		return n*(factorial_recursive(n-1));
}

//�ݹ麯��ѧϰ֮��ŵ������(Hanoi)

void hanoi(int n,char a,char b,char c)
{
	if(n==1)
	{
		printf("Move %c to %c\n",a,c);
	}

	else
	{
		hanoi(n-1,a,c,b); //��ԭ����a�ϵ�n-1��Բ��ͨ���м�����c,�ƶ���Ŀ������b��
		printf("Move %c to %c\n",a,c); //��ԭ����a������µ�Բ��,�ƶ���Ŀ������c��
		hanoi(n-1,b,a,c); //��b�ϵ�n-1��Բ��,ͨ���м�����a,�ƶ���c��
	}
}

int c5_5()
{
	char a = 'a';
	char b = 'b';
	char c = 'c';
	hanoi(6,a,b,c);
}