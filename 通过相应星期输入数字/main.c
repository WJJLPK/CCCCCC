#include <stdio.h>
#include <string.h>

#define N 12

int getindex( char *s );

int main()
{
    int n;
    char s[N];
    gets(s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}
int getindex(char *s)
{
	char *d[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	int i;
	for (i = 0; i <= 6; i++)
	{
		if (strcmp(s,d[i]) == 0)
			break;
	}
	if (i == 7)
		i = -1;
	return i;
}
