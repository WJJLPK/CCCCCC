#include <stdio.h>
#include <stdlib.h>

long multiply(int a);
int main()
{
   long m,n;
   int s=0;
   scanf("%ld",&n);
   for(m=1;s<n;m++)
   {
       s+=multiply(m);
   }
   printf("%ld",m-2);
}
long multiply(int a)
{
    if(a==0)
        return 1;
    else if(a<0)
        return -1;
    else
        return a*multiply(a-1);
}

