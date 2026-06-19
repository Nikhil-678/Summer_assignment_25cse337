#include <stdio.h>
#include <math.h>
int isArmstrong(int n)
{
    int original = n, remainder, digits = 0;
    int sum = 0;
    while (n != 0)
    {
        digits++;
        n /= 10;
    }
    n = original;
    while (n != 0)
    {
        remainder = n % 10;
        sum += pow(remainder, digits);
        n /= 10;
    }
    if (sum == original)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}