#include <stdio.h>
#include <stdlib.h>

long func(int a);
int main()
{
 int i,n;
 int m=0;
 scanf("%d/n",&n);
 for(i=1;m<n;i++)
 {
     m+=func(i);
 }
 printf("%d",i-2);


}
long func(int a)
{
    int j;
    long sum=1;
    if(a==0)
        return 1;
    else if(a<0)
        return -1;
    else
        for(j=1;j<=a;j++)
        {
            sum*=j;
        }
        return sum;

}
