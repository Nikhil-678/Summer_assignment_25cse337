#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter no. to which you want the sum");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum+=i;
    }
    printf("the sum of n no.is %d",&sum);
    return 0;
    
}