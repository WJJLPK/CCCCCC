#include<stdio.h>
int main()
{
  int a1,a2,b1,b2,c1,c2,i,n,t;
  scanf("%d/%d %d/%d",&a1,&a2,&b1,&b2);
  c2=a2*b2;
  c1=a1*b2+a2*b1;
  if (c1%c2==0)
  {
   t=c1/c2;
   printf("%d",t);
  }
 else
 {
  for(i=1;i<=c1 && i<=c2;i++)
    {
      if(c1%i==0 && c2%i==0)
         n=i;
    }
   printf("%d/%d",c1/n,c2/n);
 }
}
