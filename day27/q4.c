#include <stdio.h>
int main() 
{
    char name[50];
    int roll;
    float s1, s2, s3, s4, s5;
    float total, percentage;
    printf("===== Marksheet Generation System =====\n");
    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Marks of 5 Subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &s1);
    printf("Subject 2: ");
    scanf("%f", &s2);
    printf("Subject 3: ");
    scanf("%f", &s3);
    printf("Subject 4: ");
    scanf("%f", &s4);
    printf("Subject 5: ");
    scanf("%f", &s5);
    total = s1 + s2 + s3 + s4 + s5;
    percentage = total / 5;
    printf("\n========== MARKSHEET ==========\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", roll);
    printf("--------------------------------\n");
    printf("Subject 1 : %.2f\n", s1);
    printf("Subject 2 : %.2f\n", s2);
    printf("Subject 3 : %.2f\n", s3);
    printf("Subject 4 : %.2f\n", s4);
    printf("Subject 5 : %.2f\n", s5);
    printf("--------------------------------\n");
    printf("Total      : %.2f / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    if (percentage >= 60)
        printf("Division   : First Division\n");
    else if (percentage >= 45)
        printf("Division   : Second Division\n");
    else if (percentage >= 33)
        printf("Division   : Third Division\n");
    else
        printf("Division   : Fail\n");
    return 0;
}