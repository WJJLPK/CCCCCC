#include <stdio.h>
#include <stdlib.h>

long Fib(int n);
int main()
{
   int ret;
   int n;
   scanf("%d",&n) ;
   ret=Fib(n);
   printf("%d\n",ret);
}
long Fib(int n)
{
    if(n==0)
      return 0;
    else if(n==1)
      return 1;
    else
      return (Fib(n-1)+Fib(n-2));

}
