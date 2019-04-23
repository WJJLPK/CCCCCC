#include<stdio.h>
int main()
{
    int i=0,j;

        for(j=0;j<=60;j++)
        {
        if(j==60)
        {
            j=0;
            i++;
            if(i==13)
                break;
            printf("%d:",i);
            printf("0%d\t",j);
        }
        else
        {
            if(j<10)
            {
            printf("%d:",i);
            printf("0%d\t",j);
            }
            else
            {
                 printf("%d:",i);
                printf("%d\t",j);
            }
        }
        }

}
