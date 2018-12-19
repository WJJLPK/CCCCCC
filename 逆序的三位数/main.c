#include <stdio.h>
#include <stdlib.h>

int main()

{
  int a,b,c,d;
  scanf("%d",&a);
   b=a/100;
   c=(a-b*100)/10;
   d=a%10;
  if(a%100==0)
    printf("%d",b);
  else if(a%10==0)
    printf("%d%d",c,b);
  else
    printf("%d%d%d",d,c,b);

}
