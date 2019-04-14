#include <stdio.h>
#include <stdlib.h>
long Func(int n);
int main()
{
    int m;
    int i;
    int a,b,c;
    for(i=100;i<=999;i++)
    {
        a=i/100;
        b=i/10%10;
        c=i%10;
        m=Func(a)+Func(b)+Func(c);
        if(i==m)
        printf("%d\n",i);
    }

    return 0;
}
long Func(int n)
{
    int i;
    int sum=1;
    for(i=1;i<=n;i++)
    {
        sum*=i;
    }
    return sum;
}

