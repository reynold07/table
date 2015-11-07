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
void show_items_store(char* file_name);
void get_total_score(float item_store[]);
float get_item_score(char* item,float item_score);
int check_input_score(float score_in,float score);


#endif

