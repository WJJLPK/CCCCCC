#include <stdio.h>
int count(int x);
int main()
{
  int n;
  scanf("%d",&n);
  int c;
  if(n<0)
  {
  	printf("fu ");
  	n=-n;
  }
  c=count(n);
  for(int i=0;c>0;i++)
  {
    int m;
    m=n/c;//ȡ���������ĵ�һλ����
    n%=c;
    switch (m)
	{
    case 0:
        printf("ling");
        break;
    case 1:
        printf("yi");
        break;
    case 2:
        printf("er");
        break;
    case 3:
        printf("san");
        break;
    case 4:
        printf("si");
        break;
    case 5:
        printf("wu");
        break;
    case 6:
        printf("liu");
        break;
    case 7:
        printf("qi");
        break;
    case 8:
        printf("ba");
        break;
    case 9:
        printf("jiu");
    }
        if(c>1)//�жϵ㣬����������û�пո�
		{
        	printf(" ");
		}
    c/=10;
  }
  return 0;
}
int count(int x)//��400���򷵻�ֵΪ100
{
	int t=1;
	while(x>9)
	{
	    x/=10;
	    t*=10;
	}
	return t;
}
