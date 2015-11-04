#include <stdio.h>
#include <stdlib.h>
#include "global.h"
#include "module.h"
#include "files.h"

int main(int argv,char*argc[]) {
	int flag_global = global_init(argv,argc);
	//init_table();
	//system("pause");
	return EXIT_SUCCESS;
}
