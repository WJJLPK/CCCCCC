#include <stdio.h>
#include <stdlib.h>
int Age(int n);
int main()
 {
     int age;
     age=Age(5);
	printf("第五个人的年龄为：%d",age);
}

int Age(int n)
{
	int age;
	if(n==1)
    {
		age=10;
		return age;
	}
	else
	{
		return Age(n-1)+2;

	}
}
