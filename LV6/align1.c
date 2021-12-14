#include <stdio.h>


typedef struct _example_struct
{
	char   data1;
	short   data2;
	int   data3;
	char   data4;
	short   data5;
} example_struct;



int main(void)
{
	example_struct ex_struct;
	char *ptr;
	ptr = &ptr.data1;
	ptr = ptr + 9;
	printf("&d", sizeof(*ptr));
	return 0;
}
