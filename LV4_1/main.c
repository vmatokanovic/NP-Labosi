/*#include <stdio.h>
int main(void)
{
	 int a = 5;
	 int* p = &a;
	 printf("%d,\t%d,\t%x,\t%x,\t%d,\t%x,\t%d\t", a, sizeof(a),
	&a, p, sizeof(p), &p, *p);
	 return 0;
}
*/

#include <stdio.h>

int main(void)
{
	 int a = 5;
	 int* p;
	 p = p + 1;
	 *p = *p + 1;
	 printf("%x,\t%d", p, *p);
	 return 0;
}
