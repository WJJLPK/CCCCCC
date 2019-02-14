#include<stdio.h>

int main(void)
{
  int time;
  scanf("%d", &time);


  if(time%45 == 0 || time%30 == 0)
  {
    printf("-_-");
    printf(" %d", time*3);
  }
  else if( time%90<30 || (time%90<60 && time%90>45) )
  {
    printf("^_^");
    if(time%90<10)
      printf(" %d", 270*(time/90)+(time%90)*9 );
      else if(time%90<30)
       printf(" %d", 270*(time/90)+90 );
         else if(time%90<50)
           printf(" %d", 270*(time/90)+135+(time%90-45)*9 );
           else
             printf(" %d", 270*(time/90)+180);
  }
  else
  {
    printf("@_@");
    printf(" %d", time*3);
  }

  return 0;
}
