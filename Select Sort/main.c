#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,temp;
    int a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
}
