#include<stdio.h>
int main()
{
    int i,fact,n;
    printf("enter a no. which you want factorial of that");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    printf("%d",fact);

}