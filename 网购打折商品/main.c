#include <stdio.h>
float Discount(float m);
int main()
{
	float price, p;
	printf("Input payment:");
	scanf("%f", &p);
	price = Discount(p);
	printf("price = %.1f\n", price);
	return 0;
}
float Discount(float m)
{
	float n;
	n = m / 100;
	if (n<1)
	{
		return m;
	}
	else if (n>=1 && n<2)
	{
		return (m * 0.95);
	}
	else if (n>=2 && n<5)
	{
		return (m * 0.92);
	}
	else if (n>=5 && n<10)
	{
		return (m * 0.9);
	}
	else
	{
		return (m *	0.85);
	}
}
