#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20];
    int i;
    int sum=2;
    a[0]=1;
    a[1]=1;
    for(i=2;i<12;i++)
    {
        a[i]=a[i-1]+a[i-2];
        sum+=a[i];
    }
        printf("%d",sum);
    return 0;
}
