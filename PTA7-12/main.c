#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b;
  int op;
  scanf("%d %c %d",&a,&op,&b);
  switch(op)
  {
    case '+':
     printf("%d",a+b);
     break;
    case '-':
     printf("%d",a-b);
     break;
    case '*':
     printf("%d",a*b);
     break;
    case '/':
     if(b==0)
     printf("No zero");
     else
     printf("%d",a/b);
     break;
    default:
     printf("ERROR\n");
  }
}
