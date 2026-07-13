#include <stdio.h>
#include <string.h>
int main()
{
    int empId[50], age[50];
    float salary[50];
    char name[50][30], department[50][30];
    int n = 0, choice, i, searchId, found;
    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &empId[n]);
                printf("Enter Employee Name: ");
                scanf("%s", name[n]);
                printf("Enter Age: ");
                scanf("%d", &age[n]);
                printf("Enter Department: ");
                scanf("%s", department[n]);
                printf("Enter Salary: ");
                scanf("%f", &salary[n]);
                n++;
                printf("\nEmployee Added Successfully!\n");
                break;
            case 2:
                if(n == 0)
                {
                    printf("\nNo Employee Records Found!\n");
                }
                else
                {
                    printf("\n----------- Employee Records -----------\n");
                    printf("ID\tName\tAge\tDepartment\tSalary\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%d\t%s\t\t%.2f\n",
                               empId[i], name[i], age[i],
                               department[i], salary[i]);
                    }
                }
                break;
            case 3:
                if(n == 0)
                {
                    printf("\nNo Employee Records Found!\n");
                    break;
                }
                printf("\nEnter Employee ID to Search: ");
                scanf("%d", &searchId);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(empId[i] == searchId)
                    {
                        printf("\nEmployee Found!\n");
                        printf("Employee ID : %d\n", empId[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Age         : %d\n", age[i]);
                        printf("Department  : %s\n", department[i]);
                        printf("Salary      : %.2f\n", salary[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("\nEmployee Not Found!\n");
                }
                break;
            case 4:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }
    }
     while(choice != 4);
    return 0;
}