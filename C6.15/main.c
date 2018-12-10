#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    for(m=0;m<98;m++)
    {
         n=98-m;
         if(2*m+4*n==386)
         {
           printf("%d %d",m,n);
         }
    }
}

