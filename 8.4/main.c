#include <stdio.h>
#include <stdlib.h>

int Fail(int score[],int n);
int main()
{
   int i;
   int n;
   int k;
   int score[40];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&score[i]);
   }
   k=Fail(score,n);
   printf("%d",k);
}
int Fail(int score[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(score[i]<60)
        {
            max+=1;
        }
    }
    return max;
}
