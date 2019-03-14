//文件结构体的字符串的读写操作
#include <stdio.h>
int c6_12()
{
	int choice,num;

	char lines[100][80];

	printf("\n    ===== Menu =====\n");

	printf("\n    read file............1");

	printf("\n    write file...........2");

	printf("\n     exit................3");

	printf("\n     select:");

	scanf("%d",&choice);

	while(1){
	switch(choice)
		{
			case 1:
				
				num = readFile(lines);

				break;

			case 2:

				writeFile(lines,num);

				break;

			case 3:

				return 0;

			default:

				printf("Input Error:\n");
		}
	}
}

int readFile(char line[][80])
{
	FILE *fp;

	int i;

	char filename[30];

	printf("\nEnter file name:");

	gets(filename);

	if((fp = fopen(filename,"r"))==NULL)
	{
		printf("Cannot open file:\n");

		return 0;
	}

	for(i=0;!feof(fp);i++)
	{
		fgets(&line[i][0],80,fp);

		puts(&line[i][0]);
	}

	fclose(fp);

	return 1;
}

int writeFile(char line[][80],int num)
{
	FILE *fp;
	
	char newfilename[30];

	printf("Enter the file name:\n");

	gets(newfilename);

	if((fp = fopen(newfilename,"w"))== NULL)
	{
		printf("Cannot create\n");

		return 0;
	}

	while(num!=0)
	{
		fputs(&line[--num][0],fp);
	}
	fclose(fp);

	return 1;
}