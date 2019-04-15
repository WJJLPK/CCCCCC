#include <stdio.h>
#include <stdlib.h>
int Gcd(int a, int b);
int main()
{
    int m,n,t;
    int m1,n1;
    printf("Input m,n:");
    scanf("%d,%d",&m,&n);
    if(n<=0 || m<=0)
        printf("Input error!\n");
    else{
        t=Gcd(m,n);
           if(t==-1)
                 printf("Input error!\n");
        m1=m/t;
        n1=n/t;
        printf("%d/%d\n",m1,n1);
    }
    return 0;
}
int Gcd(int a, int b)
{
    int max=1;
    int i ;
    if(a>32767 || b>32767)
        return -1;
    for(i=1;i<=(a<b?a:b);i++)
    {
        if(a%i==0 && b%i==0)
           max=i;
    }
    return max;
}
