#include <stdlib.h> //Ҫ�ڸ��ļ�������仰,��������error C2065: 'NULL' : undeclared identifier�Ĵ���

//Լɪ��Բ������--����ʵ��
typedef struct pnode
{
	int Num;

	struct pnode *next;

}PNODE;

int c6_9()
{
	int num = 10;

	PNODE *head = NULL;

	PNODE *p, *rear, *pre; //��Ӧ�����ַ�ָ������,�ǲ����ò���������

	int i,count;

	int m; //����ֵ

	printf("Please input an integer:\n");

	scanf("%d",&m);
	
	for(i=1;i<=10;i++)
	{
		p = (PNODE*)malloc(sizeof(PNODE));

		p->Num = i;

		if(head == NULL) //���ڲ��Ǹ�ֵ
		{
			head = p;

			rear = p;
		}
		else
		{
			rear->next = p;

			rear = p;
		}
	}

	rear->next = head; //βָ��ָ����ͷ���

	p = head;

	while(p->next != p) //p�������һ���ڵ�
	{
		count = 1;

		do
		{
			p = p->next;

			count++;

		}while(count != m);

		for(pre = p;pre -> next != p;pre = pre->next);

		printf("%4d",p->Num);

		pre->next = p->next;

		free(p);

		p = pre->next;
	}
	printf("%4d",p->Num);

	free(p);

}