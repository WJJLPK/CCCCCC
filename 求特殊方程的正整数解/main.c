#include<stdio.h>
int main()
{
  int i,j;
  int n;
  int count=0;
  scanf("%d",&n);
  for(i=1;i<100;i++)
    {
      for(j=1;j<100;j++)
        {
         if(i*i+j*j==n && i<=j)
            {
                count=1;
                printf("%d %d\n",i,j);
            }
        }
    }
    if(count==0)
    {
        printf("No Solution");
    }
    return 0;
}
