#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Please enter:");
    ch=getchar();
    if(65<=ch && ch<=90)
    {
        printf("%c %d",ch+32,ch+32);
    }
    else if(97<=ch && ch<=122)
    {
        printf("%c %d",ch-32,ch-32);
    }
    else
    {
        printf("%c %d",ch,ch);
    }
    return 0;
}
