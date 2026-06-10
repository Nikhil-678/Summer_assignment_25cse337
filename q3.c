#include<stdio.h>
int main()
{
    int product=1,n,num;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
     num=n%10;
     product=product*num;
     n=n/10;

    }
    printf("multiplication of digits of the number is =%d",product);
    return 0;
}