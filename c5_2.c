#include <stdlib.h>
int c5_2()
{
	//摇骰子比点数的游戏
	int d1,d2;
	int c1 = 0,c2 = 0; //不能忘初始化c1,c2
	int i;
	//randomize();
	for(i=1;i<=100;i++)
	{
		//d1 = random(5) + 1;
		//d2 = random(5) + 1;
		//d1 += (random(5) + 1);
		//d2 += (random(5) + 1);
		if(d1 < d2)
		{
			c2 += 1;
		}
		else if(d1 > d2)
		{
			c1 += 1;
		}
	}
	printf("In this game,d1 won %d.\nd2won %d.",c1,c2);
}