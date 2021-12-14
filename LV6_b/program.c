#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	printf("Unesite koliko brojeva u nizu zelite: \n");
	scanf("%d", &n);
	float* p=(float*)calloc(n,sizeof(float));

	return 0;
}
