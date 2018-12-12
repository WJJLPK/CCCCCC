#include <stdio.h>
#include <stdlib.h>

int func(int a,int b);
int main()
{
   int m,n;
   int z;
   scanf("%d %d",&m,&n);
   z=func(m,n);
   printf("%d",z);
}
int func(int a,int b)
{
    int max;
    for(int i=1;i<=(a<b?a:b);i++)
    {
        if(a%i==0 && b%i==0)
            max=i;
    }
    return (a*b)/max;
}
