#include <stdio.h>
#include <string.h>
int main()
{
    int n, i;
    char name[50][30];
    char roll[50][20];
    float marks[50];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%s", roll[i]);
        printf("Enter Name: ");
        scanf("%s", name[i]);
        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
    printf("\n----- Student Records -----\n");
    printf("Roll No\t\tName\t\tMarks\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\t\t%s\t\t%.2f\n", roll[i], name[i], marks[i]);
    }
    return 0;
}
