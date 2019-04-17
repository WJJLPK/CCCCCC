#include <stdio.h>
#include <stdlib.h>
int People(int score[],int n);
int main()
{
    int m,n;
    int score[40];
    m=People(score,n);
    printf("%d",m);
}
int People(int score[],int n)
{
    int i;
    int m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
        if(score[i]<=60)
            m++;
    }
    return m;
}
