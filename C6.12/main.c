#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    long a[10];
    int sum=0;
    for(i=0;i<10;i++)
    {
      scanf("%ld",&a[i]);
      if(a[i]>0)
      {
         sum+=a[i];
      }
      else
      printf("%ld",sum);
    }

}
