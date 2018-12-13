#include <stdio.h>
#include <stdlib.h>

int People(int score[]);
void ReadScore(int score[],int n);
int Average(int score[],int n);
int main()
{
    int score[40],aver,n;
    int total=0;
    int i;
    n=People(score);
    aver=Average(score,n);
    for(i=0;i<n;i++)
    {
        if(score[i]>aver)
            total+=1;
    }
    printf("%d",total);
}
int People(int score[])
{
    int i=-1;
    do{
        i++;
        scanf("%d",&score[i]);
    }while(score[i]>=0);
    return i;
}
void ReadScore(int score[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(score[i]>0)
        {
         scanf("%d",&score[i]);
        }
    }
}
int Average(int score[],int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=score[i];
    }
    return n>0?sum/n:-1;
}


