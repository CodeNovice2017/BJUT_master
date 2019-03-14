#include <stdlib.h> //要在该文件加上这句话,否则会出现error C2065: 'NULL' : undeclared identifier的错误

//约瑟夫圆桌问题--链表实现
typedef struct pnode
{
	int Num;

	struct pnode *next;

}PNODE;

int c6_9()
{
	int num = 10;

	PNODE *head = NULL;

	PNODE *p, *rear, *pre; //不应该用字符指针数组,那不就用不到链表了

	int i,count;

	int m; //上限值

	printf("Please input an integer:\n");

	scanf("%d",&m);
	
	for(i=1;i<=10;i++)
	{
		p = (PNODE*)malloc(sizeof(PNODE));

		p->Num = i;

		if(head == NULL) //等于不是赋值
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

	rear->next = head; //尾指针指向了头结点

	p = head;

	while(p->next != p) //p不是最后一个节点
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