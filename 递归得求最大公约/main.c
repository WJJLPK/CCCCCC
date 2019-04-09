#include <stdio.h>
#include <stdlib.h>
int Ga(int a,int b);
int main()
{
    int a,b,g;
    scanf("%d,%d",&a,&b);
    g=Ga(a,b);
    printf("%d",g);
    return 0;
}
int Ga(int a,int b)
{
    if(a>b)
    {
        return Ga(a-b,b);
    }
    else if(a<b)
    {
        return Ga(a,b-a);
    }
    else
    {
        return a;
    }
}
