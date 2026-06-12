#include<stdio.h>
int main()
{
    int start,end,n,temp,digit,sum;
    printf("enter two number to define range");
    scanf("%d%d",&start,&end);
    for(n=start;n<=end;n++)
    {
        temp=n;
        sum=0;
        while(temp>0)
        {
            digit=temp%10;
            sum=sum+digit*digit*digit;
            temp=temp/10;
        }
        if(sum==n)
          printf("%d\n",n);
    }
    return 0;
}