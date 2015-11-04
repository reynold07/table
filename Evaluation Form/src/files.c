#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "files.h"

int save_pre(char* file_n)
{
	char *filename;
	int str_len = 0;
	FILE* fp = NULL;
	fp = fopen(file_n,"w+");
	if(fp == NULL)
	{
		printf("creat file error\n");
		return 2;
	}
	fclose(fp);
	return 0;

}

