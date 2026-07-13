#include <stdio.h>
#include <string.h>
#define MAX 50
int roll[MAX];
char name[MAX][30];
float marks[MAX];
int count = 0;
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
int main()
{
    int choice;
    do
    {
        printf("\n========== STUDENT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                printf("\nThank You!\n");
                break;
            default:
                printf("\nInvalid Choice!\n");
        }
    }while(choice!=6);
    return 0;
}
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d",&roll[count]);
    printf("Enter Name: ");
    scanf("%s",name[count]);
    printf("Enter Marks: ");
    scanf("%f",&marks[count]);
    count++;
    printf("\nStudent Added Successfully!\n");
}
void displayStudents()
{
    int i;
    if(count==0)
    {
        printf("\nNo Records Found!\n");
        return;
    }
    printf("\n-----------------------------------------\n");
    printf("Roll\tName\t\tMarks\n");
    printf("-----------------------------------------\n");
    for(i=0;i<count;i++)
    {
        printf("%d\t%s\t\t%.2f\n",roll[i],name[i],marks[i]);
    }
}
void searchStudent()
{
    int i,r,found=0;
    printf("\nEnter Roll Number to Search: ");
    scanf("%d",&r);
    for(i=0;i<count;i++)
    {
        if(roll[i]==r)
        {
            printf("\nStudent Found\n");
            printf("Roll : %d\n",roll[i]);
            printf("Name : %s\n",name[i]);
            printf("Marks: %.2f\n",marks[i]);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("\nStudent Not Found!\n");
}
void updateStudent()
{
    int i,r,found=0;
    printf("\nEnter Roll Number to Update: ");
    scanf("%d",&r);
    for(i=0;i<count;i++)
    {
        if(roll[i]==r)
        {
            printf("Enter New Name: ");
            scanf("%s",name[i]);
            printf("Enter New Marks: ");
            scanf("%f",&marks[i]);
            printf("\nRecord Updated Successfully!\n");
            found=1;
            break;
        }
    }
    if(found==0)
        printf("\nStudent Not Found!\n");
}
void deleteStudent()
{
    int i,j,r,found=0;
    printf("\nEnter Roll Number to Delete: ");
    scanf("%d",&r);
    for(i=0;i<count;i++)
    {
        if(roll[i]==r)
        {
            for(j=i;j<count-1;j++)
            {
                roll[j]=roll[j+1];
                strcpy(name[j],name[j+1]);
                marks[j]=marks[j+1];
            }
            count--;
            found=1;
            printf("\nRecord Deleted Successfully!\n");
            break;
        }
    }
    if(found==0)
        printf("\nStudent Not Found!\n");
}