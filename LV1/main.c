#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
               int j;
               int i = 0;
               float x = 9.34;

               do
               {
                             i++;
                             x = x - 0.123;
               } while(x > 1);
               j = i;

               return 1;
}


