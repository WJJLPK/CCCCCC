#include <stdio.h>
int IsPrime(int x);
int main()
{
    int i;
    int n;
    int t;
    int sum=0;
    printf("Input n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        t=IsPrime(i);
        if(t==0)
            sum+=i;
    }
    printf("sum=%d\n",sum);
}
int IsPrime(int x)
{
    int i;
    int flag;
    if(x==2)
            return 0;
    else
    {
    for(i=2;i<x;i++)
    {
         if(x%i==0)
            {
                flag=0;
                break;
            }
        else
                  flag=1;
    }
    if(flag==1)
    {
        return 0;
    }
    else
        return 1;
    }
}
