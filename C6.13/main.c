#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int a[10];
    int i;
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            sum+=a[i];
        }
        else if(a[i]<0)
        {
            sum=sum;
        }
        else
            printf("%d",sum);
    }
}
