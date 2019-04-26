#include <stdio.h>
#include <stdlib.h>
float Intergral(float (*f)(float),float a,float b);
float A(float x);
float B(float x);
int main()
{
    float x,y;
    x=Intergral(A,0,1);
    y=Intergral(B,0,3);
    printf("%f,%f",x,y);
    return 0;
}
float Intergral(float (*f)(float),float a,float b)
{
    float h,s=0;
    int i;
    h=(a+b)/10000;
    for(i=0;i<10000;i++)
    {
        s+=h*f(a);
        a+=h;
    }
    return s;
}
float A(float x)
{
    return 1+x*x;
}
float B(float x)
{
    return x/(1+x*x);
}
