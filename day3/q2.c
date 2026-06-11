#include<stdio.h>
int main()
{
    int i,j,start,end,flag;
    printf("enter two positive number");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++)
    {
        if(i<2)
        {
            continue;
        }
        flag=0;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
               flag=1;
               break;
            }
        }
        if(flag==0)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}