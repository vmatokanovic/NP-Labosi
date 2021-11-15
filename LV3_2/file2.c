#include <stdio.h>

static int global_variable = 7;

int printing()
{
	printf("%d", global_variable);
	return 0;
}
