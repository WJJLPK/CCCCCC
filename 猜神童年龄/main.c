#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    int x3;
    long x4;
    int b1,b2,b3,b4,a1,a2,a3,a4,a5,a6;
    for(age=10;age<=22;age++)
    {
        x3=age*age*age;
        b1=x3/1000;
        b2=x3/100%10;
        b3=x3%100/10;
        b4=x3%10;
        if(b1!=b2 && b1!=b3 && b1!=b4 && b2!=b3 && b2!=b4 && b4!=b3)
        {
            x4=age*age*age*age;
            a1=x4/100000;
            a2=x4/10000%10;
            a3=x4/1000%10;
            a4=x4%1000/100;
            a5=x4%100/10;
            a6=x4%10;
            if(a1!=b1 && a1!=b2 && a1!=b3 && a1!=b4 && a1!=a2 && a1!=a3 && a1!=a4 && a1!=a5 && a1!=a6 && a2!=a3 && a4!=a2 && a2!=a5 && a6!=a2 && a4!=a3 && a3!=a5 && a3!=a6 && a4!=a5 && a4!=a6 && a5!=a6 &&  a2!=b1 && a2!=b2 && a2!=b3 && a2!=b4 && a3!=b1 && a3!=b2 && a3!=b3 && a3!=b4)
            {
                printf("age=%d\n",age);
            }
        }
    }

    return 0;
}
