#include <stdio.h>
#include "file3.h"
int global_variable = 0;
int increment(){
	global_variable++;
	return global_variable;
}
