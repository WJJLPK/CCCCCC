#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    for(a=0;a<=16;a++)
    {
        for(b=0;b<=25;b++)
        {
            c=30-a-b;
            if(a*3+b*2+c==50)
            {
                printf("Man   Women   Children\n");
                printf("%3d%8d%8d\n",a,b,c);
            }
        }
    }
    return 0;
}
