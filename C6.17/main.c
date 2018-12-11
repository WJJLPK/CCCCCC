#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    for(a=1; a<10; a++)
    {
        for(b=1; b<20; b++)
        {
            for(c=1; c<50; c++)
            {
                if(a+b+c==50 && 10*a+5*b+c==100)
                {
                    printf("%d %d %d",a,b,c);
                }
            }
        }
    }
}
