#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
     
    }
    if(n<=1)
    {
        printf("not prime");
    }
    else if(flag==1)
    {
        printf("not prime");
    }
    else
    {
        printf("prime");
    }
    return 0;

}