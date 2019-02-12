#include<stdio.h>
int main()
{
	int n,ret=0;
	scanf("%d",&n);
    for(int y=0;y<100;y++)
    {
    	for(int f=0;f<100;f++)
    	{
    		if(100*f+y-n==200*y+2*f)
    		{
    			printf("%d.%d",y,f);
    			ret=1;
    			break;
			}
		}
	}
	if(ret==0)
	{
		printf("No Solution");
	}
    return 0;
}
