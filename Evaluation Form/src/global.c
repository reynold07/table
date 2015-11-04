#include <stdio.h>
#include <string.h>
#include "global.h"
#include "module.h"

int global_init(int argv_g,char* argc_g[])
{
	//int i;
	if(argv_g == 1){
		return 0;
	}
	const char* pre_h = "-h";
	const char* pre_d = "-d";
	const char* pre_f = "-f";
/*	for(i=0;i<argv_g;i++)
	{
		printf("i is %d,argv is %d, argc is %s\n",i,argv_g,argc_g[i]);
	}*/
	if(strcmp(pre_h,argc_g[1])==0)
	{
		show_helpfile();
	}
	else if(strcmp(pre_d,argc_g[1])==0)
	{
		get_item_score();
	}
	else if(strcmp(pre_f,argc_g[1])==0)
	{
		printf("open file\n");
	}
	return 0;
}

void show_helpfile(void)
{
	printf("Help file:\n");
}

void check_flag(int flag)
{
	if(flag == FLAG_NONE)
	{

	}
	else if(flag == FLAG_HELP)
		{

		}
	else if(flag == FLAG_SKIP)
		{

		}
	else if(flag == FLAG_ITEM)
		{

		}
}