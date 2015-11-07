#ifndef __GLOBAL_H
#define __GLOBAL_H

#define FLAG_NONE		0
#define FLAG_HELP		1
#define FLAG_SKIP		2
#define FLAG_ITEM		3
#define FLAG_WRONG	4

//#define MODE_DEBUG
int global_init(int argv_g,char* argc_g[]);
//void check_flag(int flag);
void show_wrong_pre(void);
void show_helpfile(void);

#endif
