#include<stdio.h>
int main()
{
  int A;
  scanf("%d",&A);
  int i,j,k;
  int count=0;
  for(i=A;i<=A+3;i++)
  {
    for(j=A;j<=A+3;j++)
    {
        for(k=A;k<=A+3;k++)
        {
          if(k!=i && k!=j &&i!=j)
          {
            printf("%d",i*100+j*10+k);
            count++;
            if(count%6==0)
            {
              printf("\n");
            }
            else
            {
              printf(" ");
            }
          }
        }
    }
  }
}
