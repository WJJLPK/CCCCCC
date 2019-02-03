#include<stdio.h>
double a3,a2,a1,a0;
double f(double z);
int main()
{
    double a,b;
    float left,right,mid;
    scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);
    scanf("%lf %lf",&a,&b);
    left=a;
    right=b;
   while(right-left>0.001 && f(right)*f(left)<=0)
	{
		if(f(left)==0)
		  {
			printf("%.2f",left);
			return 0;
		  }
		 if(f(right)==0)
		  {
			printf("%.2f",right);
			return 0;
	  	}
		mid=(left+right)/2;
		if(f(left)*f(mid)>0)
		  {
			left=mid;
	  	}
		else
		  {
			right=mid;
	  	}
	}
	printf("%.2f",(left+right)/2);
	return 0;
}
double f(double z)
{
  double y;
  y=a3*z*z*z+a2*z*z+a1*z+a0;
  return y;
}
