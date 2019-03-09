#include<stdio.h>

typedef struct Person{
    char name[20];
    char birthday[20];
    char gender[10];
    char tel[20];
    char mobile[20];
}Person1;

int main()
{
    int n,i,a,b[20];
    scanf("%d",&n);
    Person1 p[20];
    for(i=0;i<n;i++)
    {
        scanf("%s %s %s %s %s",p[i].name,p[i].birthday,p[i].gender,p[i].tel,p[i].mobile);
    }
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
        if(b[i]>=0 && b[i]<n)
        {
            printf("%s %s %s %s %s\n",p[b[i]].name,p[b[i]].tel,p[b[i]].mobile,p[b[i]].gender,p[b[i]].birthday);
        }
        else
        {
            printf("Not Found\n");
        }
    }

}
