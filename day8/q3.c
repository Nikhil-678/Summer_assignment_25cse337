#include<stdio.h>
int main()
{
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf("%c",'A'+j-1);
            j++;
        }
        printf("\n");
    }
    return 0;
}