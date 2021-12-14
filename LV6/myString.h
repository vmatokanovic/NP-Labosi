#include <stdio.h>
#include <string.h>

int stringLength(char str[])
{
	int duljinaNiza, i;
	while(str[i] != '\0'){
	         duljinaNiza++;
	         i++;
	    }
	return duljinaNiza;
}

void stringTrim(char str[])
{
	int duljinaNiza;
	int i, j, k;
	while(str[i] != '\0')
	{
		         duljinaNiza++;
		         i++;
		    }
	for (j = 0; str[j] != ' '; j++)
	{
	        str[j] = '';
	}
	for (k = duljinaNiza; str[k] != ' '; k--)
		{
		        str[k] = '';
		}
}

int main(void)
{
	str1[]=" String with 1 left space and 3 right spaces   ";
	printf("Duljina stringa je: %d", stringLength(str1[]));
	return 0;
}
