#include<stdio.h>
#include<math.h>
int isPrime(int x)
{
    int flag = 1;
    int i;
    if (x==1)
    {
        flag = 0;
    }
    int k = (int)(sqrt(x));
    for (i = 2; i <= k; i++)
    {
        if (x%i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        return 1;
    else
     return 0;
}
int isHuiwen(int x)
{
    int c, t = 0;
    c = x;
    while (c!=0)
    {
        t *= 10;
        t += c % 10;
        c /= 10;
    }
    if (t == x)
        return 1;
    else
    return 0;
}

int main()
{
    int a,b;
    int i;
    scanf("%d %d",&a,&b);
        for (i = a; i <= b; i++)
        {
            if (isPrime(i) && isHuiwen(i))
            {
                printf("%d\n",i);
            }
        }
    return 0;
}
