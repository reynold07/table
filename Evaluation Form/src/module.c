#include <stdio.h>
#include <stdlib.h>
#include "items.h"
#include "module.h"
#include "files.h"

void init_table(void)
{
	int times = 3;
	int table_flag = 0;
	while(times--)
	{
		table_flag = print_table_ask();
		if(table_flag == ASK_NONE)
		{
			continue;
		}
		else if(table_flag == ASK_Q)
		{
			break;
		}
		else if(table_flag == ASK_Y)
		{
			print_table_items();
			break;
		}
	}
}

int print_table_ask(void)
{
	char cinput;
	char cnone;
	printf("Start the table!\n");
	printf("press y to start,or press q to quit!(y/q)\n");
	scanf("%c",&cinput);
	//cnone = getchar();
	scanf("%c",&cnone);//get chat '\n'
	//fflush(stdin);
	if(cinput == 'y')
	{
		//print_table_items();
		return ASK_Y;
	}
	else if(cinput == 'q')
	{
		return ASK_Q;
	}
	else{
		printf("please press y or q!\n\n");
		return ASK_NONE;
	}
	return 0;
}

void print_table_items(void)
{
	int check_input;
	printf("This is an Evaluation Form\n");
	printf("See all of the items first?(y/n)\n");
	check_input=check_y_or_n();
	if(check_input == 1)
	{
		show_items();
	}
	printf("Read the items and input the scores now?(y/n)\n");
	check_input=check_y_or_n();
	if(check_input == 1){
		get_total_score();
	}
	else{
		printf("exit!\n");
	}
}

void show_items(void)
{
	printf("----------------------------------------------------------------\n");
	printf("1.Post work intensity(2):\n");
	printf("(1/2)working overtime:\n");
	printf("Full one hour of overtime, minus 0.02.\n");
	printf("(2/2)operating hours:\n");
	printf("The strength to working, over 95%%, or less than 70%%, to 0.\n");
	printf("2.Sustainable development(4):\n");
	printf("(1/4)Property of the work:\n");
	printf("In the post work takes time and his own posts in the non-occupancy time,\n");
	printf("if the proportion is less than 90%%, for each 0.1 percent reduction.\n");
	printf("(2/4)Work difficulty:\n");
	printf("Low difficulty of the work and repetitive work (testing, etc.), more than half a day and minus 0.2.\n");
	printf("(3/4)Sustainable development:\n");
	printf("New technologies, new projects and other work contacts, starting with 0, contact plus 0.2.\n");
	printf("(4/4)Independent study time:\n");
	printf("Time to learn new knowledge, accumulated not less than 30 hours.\n");
	printf("3.Work state:\n");
	printf("Working environment and working mood.\n");
	printf("4.Payroll:\n");
	printf("Satisfaction.\n");
	printf("----------------------------------------------------------------\n");
}

int check_y_or_n(void)
{
	char cinput,cnone;
	scanf("%c",&cinput);
	scanf("%c",&cnone);
	if(cinput == 'y')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void get_total_score(void)
{
	float sum = 0;
	float get_score = 0;
	printf("Read the items and input the scores.\n");
	printf("Full one hour of overtime, minus 0.02. (1)\n");
	scanf("%f",&get_score);
	sum += get_score;
	printf("The strength to working, over 95%%, or less than 70%%, to 0. (0.5)\n");
	scanf("%f",&get_score);
	sum += get_score;
	printf("In the post work takes time and his own posts in the non-occupancy time,\n");
	printf("if the proportion is less than 90%%, for each 0.1 percent reduction. (2)\n");
	scanf("%f",&get_score);
	sum += get_score;
	printf("Low difficulty of the work and repetitive work (testing, etc.), more than half a day and minus 0.2. (2)\n");
	scanf("%f",&get_score);
	sum += get_score;
	printf("New technologies, new projects and other work contacts, starting with 0, contact plus 0.2. (2)\n");
	scanf("%f",&get_score);
	sum += get_score;
	printf("Time to learn new knowledge, accumulated not less than 30 hours.\n (1)");
	scanf("%f",&get_score);
	sum += get_score;
	printf("Working environment and working mood.\n (0.5)");
	scanf("%f",&get_score);
	sum += get_score;
	printf("Payroll Satisfaction.\n (1)");
	scanf("%f",&get_score);
	sum += get_score;
	printf("Score:%f\n",sum);
}

float get_item_score(char* item,float item_score)
{

	return item_score;
}

int check_input_score(float score_in,float score)
{
	if((score_in >= 0)&&(score_in<= score)){
		return PARA_LEGAL;
	}
	else{
		return PARA_ILLEGAL;
	}
}



