#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Please enter:");
    ch=getchar();
    if(48<=ch && ch<=57)
    {
        printf("����һ�������ַ�");
    }
    else if(65<=ch && ch<=90)
    {
        printf("����һ����д��ĸ");
    }
    else if(97<=ch && ch<=122)
    {
        printf("����һ��Сд��ĸ");
    }
    else if(ch==32)
    {
        printf("����һ���ո�");
    }
    else
    {
        printf("����һ�������ַ�");
    }
    return 0;
}
