#include <stdio.h>
#include <string.h>
#include "global.h"
#include "module.h"
#include "files.h"

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
		return FLAG_HELP;
	}
	else if(strcmp(pre_d,argc_g[1])==0)
	{
		show_items_store("NULL");
		return FLAG_ITEM;
	}
	else if(strcmp(pre_f,argc_g[1])==0)
	{
		printf("filename is:%s\n",argc_g[2]);
		//printf("open file\n");
		show_items_store(argc_g[2]);
		//save_pre(argc_g[2]);
		//save_pre(argc_g[2],score_store,NUM_ITEM+1);
		return FLAG_SKIP;
	}
	else
	{
		show_wrong_pre();
		return FLAG_WRONG;
	}
	return FLAG_NONE;
}

void show_wrong_pre(void)
{
	printf("The pres you input was wrong.\n");
	printf("Press -h for help.\n");
}

void show_helpfile(void)
{
	printf("You can add parameter -d to get the score input item.\n");
	printf("You can add -f and the file's name to set the name of your parameter file.\n");
}

/*
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
*/

