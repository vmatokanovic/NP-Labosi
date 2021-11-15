#include <stdio.h>
#include "file3.h"

int use_it()
{
	++global_variable;
	printf("%d", global_variable);
	return 0;
	}

int main()
{
	increment();
	use_it();
	return 0;
}
