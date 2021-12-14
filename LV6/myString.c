/*#include <stdio.h>
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
	int n = 0, i = 0, j, k;
	while(str[i] != '\0')
	{
		         duljinaNiza++;
		         i++;
		    }
	for (j = 0; str[j] != ' '; j++)
	{
	        str[j] = str[n];
	        n++;
	}
	n = duljinaNiza;
	for (k = duljinaNiza; str[k] != ' '; k--)
		{
			str[k] = str[n];
			n--;
		}
	printf("Trimani string je: %s", str);
}

int main(void)
{
	char str1[100]= " String with 1 left space and 3 right spaces   ";
	printf("Duljina stringa je: %d", stringLength(str1));
	stringTrim(str1);
	return 0;
}*/
