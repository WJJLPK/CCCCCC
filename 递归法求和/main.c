#include <stdio.h>
#include <stdlib.h>
int Sum(int n);
int main()
{
    int n;
    int sum;
    printf("Please input n:");
    scanf("%d",&n);
    sum=Sum(n);
    if(sum==0)
        printf("data error!\n");
    else{
        printf("sum=%d\n",sum);
    }
    return 0;
}
int Sum(int n)
{
    if(n<=0)
        return 0;
    else
        return n+Sum(n-1);
}
