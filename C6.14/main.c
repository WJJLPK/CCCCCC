#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    for(a=0; a<17; a++)
    {
        for(b=0; b<26; b++)
        {
            c=30-a-b;
            if(3*a+2*b+c==50)
            {
                printf("%d %d %d\ns",a,b,c);
            }
        }
    }
}
