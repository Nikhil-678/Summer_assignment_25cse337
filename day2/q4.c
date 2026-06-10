#include<stdio.h>
int main()
{
    int n,num=0,digit,original;
    printf("enter a number");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        digit=n%10;
        num=num*10+digit;
        n/=10;
    }
    if(original==num)
    {
        printf("the input number is palindrome");
    }
    else
    {
        printf("the input number is not pelindrome");
    }
}