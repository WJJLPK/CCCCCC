#include <stdio.h>
#include <stdlib.h>

int main()
{
   int year;
   long m;
   double n;
   printf("Please enter m and year:");
   scanf("%ld %d",&m,&year);
   if(year==1)
   {
       printf("%lf",n=m+m*0.0225);
   }
   else if(year==2)
   {
       printf("%lf",n=m+m*0.0243*2);
   }
   else if(year==3)
   {
       printf("%lf",n=m+m*0.0270*3);
   }
    else if(year==5)
   {
       printf("%lf",n=m+m*0.0288*5);
   }
    else if(year==8)
   {
       printf("%lf",n=m+m*0.0300*8);
   }
   return 0;
}
