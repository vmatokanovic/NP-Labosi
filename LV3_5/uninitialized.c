#include <stdio.h>
#include <stdlib.h>

int global;

int main(void)
{
 printf("================================\n");
 printf("Uninitialized variables\n");
 printf("================================\n");
 int local;
 if (local % 2)
 {
	 printf("TRUE : global = %d, local = %d\n", global,
	local);
 }
 else
 {
	 printf("FALSE : global = %d, local = %d\n", global,
	local);
 }
 return 0;
}
