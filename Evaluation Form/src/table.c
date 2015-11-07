#include <stdio.h>
#include <stdlib.h>
#include "global.h"
#include "module.h"
#include "files.h"
#include "items.h"

int main(int argv,char*argc[]) {
	int global_flag = global_init(argv,argc);
	if(global_flag==FLAG_NONE){
		init_table();
	}
	//system("pause");
	return EXIT_SUCCESS;
}
