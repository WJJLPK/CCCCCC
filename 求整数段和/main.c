#include<stdio.h>
int main()
{
  int A,B;
  int i;
  int Sum=0;
  int couter=0;
  scanf("%d %d",&A,&B);
  for(i=A;i<=B;i++)
  {
    Sum+=i;
    couter++;
    printf("%5d",i);
    if(couter%5==0 && i!=B)
      {
        printf("\n");
      }
  }
  printf("\n");
  printf("Sum=%d",Sum);
  return 0;
}
