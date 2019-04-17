#include <stdio.h>
#include <stdlib.h>
int Monkey(int n,int x);
int main()
{
    int n,x;
    printf("Input days n:");
    scanf("%d",&n);
    x=Monkey(n,x);
    printf("x=%d\n",x);
    return 0;
}
int Monkey(int n,int x)
{
    if(n==1)
        x=1;
    else
        x=2*Monkey(n-1,x)+2;
    return x;
}
