#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c,d;
  scanf("%d %d",&a,&b);
  c=a%100+a/100*60+b;
  d=c/60*100+(c-c/60*60);
  printf("%d",d);
}
