#include<stdio.h>
int main()
{
    int i,table,n;
    printf("which multiplication table you want");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        table=n*i;
        printf("%d x %d = %d\n",n,i,table);

    }
    return 0;

}
