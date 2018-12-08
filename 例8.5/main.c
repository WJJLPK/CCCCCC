#include <stdio.h>
#include <stdlib.h>

 int Average(int score[],int n);
int main()
{
    int score[40];
    int n;
    int i;
    int aver;
    scanf("%d\n",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }
    aver=Average(score,n);
    printf("%d",aver);

}
int Average(int score[],int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=score[i];
    }
    return sum/n;
}
