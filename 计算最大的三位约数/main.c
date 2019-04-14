#include <stdio.h>
#include <stdlib.h>
int Func(int n);
int main()
{
    int n;
    int m;
    printf("Input n:");
    scanf("%d",&n);
    if(n<=1000000 && n>=1000)
    {
        m=Func(n);
        printf( "%d\n",m);
    }
    else
        printf("Input error!\n");
    return 0;
}
int Func(int n)
{
    int i,j;
    for(i=100;i<=999;i++)
    {
        if(n%i==0)
        {
            j=i;
        }

    }
    return j;
}
