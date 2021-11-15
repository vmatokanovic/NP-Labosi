#include <stdio.h>
#include "file1.c"
#include "file2.c"

extern int global_variable;

int main()
{
	init();
	printing();
	return 0;
}
