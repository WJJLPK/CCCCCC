#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Please enter:");
    ch=getchar();
    if(48<=ch && ch<=57)
    {
        printf("这是一个数字字符");
    }
    else if(65<=ch && ch<=90)
    {
        printf("这是一个大写字母");
    }
    else if(97<=ch && ch<=122)
    {
        printf("这是一个小写字母");
    }
    else if(ch==32)
    {
        printf("这是一个空格");
    }
    else
    {
        printf("这是一个其他字符");
    }
    return 0;
}
