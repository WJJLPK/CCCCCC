#include <stdio.h>
#include <stdlib.h>
#define N 40
float Pingjun(int score[]);
float Zhongwei(int score[]);
int Zhongshu(int score[]);
int main()
{
   int score[N]={0};
   int i,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
   float aver,zhongwei;
   int zhongshu;
   for(i=0;i<N;i++)
    {
        printf("请输入第%d个人的打分:",i+1);
        scanf("%d",&score[i]);
        if(score[i]==1)
            count1++;
        else if(score[i]==2)
            count2++;
        else if(score[i]==3)
            count3++;
        else if(score[i]==4)
            count4++;
        else if(score[i]==5)
            count5++;
        else if(score[i]==6)
            count6++;
        else if(score[i]==7)
            count7++;
        else if(score[i]==8)
            count8++;
        else if(score[i]==9)
            count9++;
        else
            count10++;
    }
    printf("Grade    Count    Histogram\n");
    printf("1        %d        ",count1);
    for(i=1;i<=count1;i++)
    {
        printf("*");
    }
    printf("\n");
    printf("2        %d        ",count2);
    for(i=1;i<=count2;i++)
    {
        printf("*");
    }
    printf("\n");
    printf("3        %d        ",count3);
    for(i=1;i<=count3;i++)
    {
        printf("*");
    }
    printf("\n");
    ...
   aver=Pingjun(score);
   zhongwei=Zhongwei(score);
   zhongshu=Zhongshu(score);
   printf("平均数是:%f\n",aver);
   printf("中位数是:%f\n",zhongwei);
   printf("众数是:%d",zhongshu);
    return 0;
}
float Pingjun(int score[])
{
    int i;
    float sum=0;
    for(i=0;i<N;i++)
    {
        sum+=score[i];
    }
    return (float)sum/N;
}
float Zhongwei(int score[])
{
    int i,j,k,t;
    float n;
	for(i = 0; i < N- 1; i++)
    {
		k = i;
		for(j = i + 1; j < N; j++)
        {
			if(score[k] < score[j])
			 k = j;
		}
		if(i != k)
		{
			t = score[i];
			score[i] = score[k];
			score[k] = t;
		}
	}
	n=score[1]+score[2];
	return n/2;
}
int Zhongshu(int score[])
{
    int i,number,j,c,max=0;
    for(i=0;i<N-1;i++)
    {
        number=1;
        for(j=0;j<N;j++)
        {
            if(score[j]==score[i])
                number++;
            if(max<number)
                {
                    max=number;
                    c=score[i];
                }
        }
    }
    return c;
}
