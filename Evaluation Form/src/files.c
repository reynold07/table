#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "items.h"
#include "files.h"

int save_pre2(char* file_n)
{
	FILE* fp = NULL;
		fp = fopen(file_n,"w+");
		if(fp == NULL)
		{
			printf("open file error.\n");
			return 2;
		}
		printf("open file:%s ok\n",file_n);
		if(fclose(fp)==EOF)
		{
			printf("Close file error.\n");
		}
		return 0;
}
int save_pre(char* file_n,float para[],int par_num)
{
	char par_temp[NUM_ITEM+1][20];
	int i=0;
	for(i=0;i<par_num-1;i++)
	{
		sprintf(par_temp[i],"item %d is %f\n",i+1,para[i]);
	}
	sprintf(par_temp[i],"total is %f\n",para[i]);

	FILE* fp = NULL;
	fp = fopen(file_n,"w+");
	if(fp == NULL)
	{
		printf("open file error.\n");
		return 2;
	}
	for(i=0;i<par_num;i++)
	{
		if(fputs(par_temp[i],fp)==EOF)
		{
			printf("save parameter error.\n");
		}
	}
	if(fclose(fp)==EOF)
	{
		printf("Close file error.\n");
		return 1;
	}

	return 0;
}

