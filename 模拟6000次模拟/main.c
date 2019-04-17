#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 6000
int main()
{
int r[6]={0};
int i;
int n;
srand(time(NULL));
for(i=0;i<N;i++)
{
    n=rand()%6;
    r[n]++;
}
for(i=0;i<6;i++)
printf("%dµã:%5d´Î %f%%\n",i+1,r[i],(double)r[i]/N*100);
return 0;
}
