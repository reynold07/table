#ifndef	__MOUDLE_H
#define	__MODULE_H

#define ASK_Y					1
#define ASK_Q					0
#define ASK_NONE				-1

#define PRESS_Y					1
#define PRESS_N					0

#define PARA_LEGAL				0
#define PARA_ILLEGAL			1

void init_table(void);
int print_table_ask(void);
void print_table_items(void);
int check_y_or_n(void);
void show_items(void);
void get_total_score(void);
float get_item_score(char* item,float item_score);


#endif

