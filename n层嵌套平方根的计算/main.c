#include <stdio.h>
#include <stdlib.h>
double Y(double x,int n);
int main()
{
    double x;
    int n;
    float result;
    printf("Please input x and n:");
    scanf("%lf,%d",&x,&n);
    result=Y(x,n);
    printf("Result=%.2f\n",result);
    return 0;
}
double Y(double x, int n)
{
    if(n==0)
        return 0;
    else
        return (sqrt(x+Y(x,n-1)));
}
