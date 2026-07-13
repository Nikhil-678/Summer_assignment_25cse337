#include <stdio.h>
#include <string.h>
struct Contact
{
    int id;
    char name[50];
    char phone[15];
};
struct Contact c[100];
int count = 0;
void addContact()
{
    printf("\nEnter Contact ID: ");
    scanf("%d", &c[count].id);
    printf("Enter Name: ");
    scanf(" %[^\n]", c[count].name);
    printf("Enter Phone Number: ");
    scanf("%s", c[count].phone);
    count++;
    printf("\nContact Added Successfully!\n");
}
void displayContacts()
{
    int i;
    if (count == 0)
    {
        printf("\nNo Contacts Available!\n");
        return;
    }
    printf("\n------ Contact List ------\n");

    for (i = 0; i < count; i++)
    {
        printf("\nContact ID : %d", c[i].id);
        printf("\nName       : %s", c[i].name);
        printf("\nPhone No.  : %s", c[i].phone);
        printf("\n---------------------------");
    }
}
void searchContact()
{
    int id, i, found = 0;
    printf("\nEnter Contact ID to Search: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++)
    {
        if (c[i].id == id)
        {
            printf("\nContact Found!");
            printf("\nContact ID : %d", c[i].id);
            printf("\nName       : %s", c[i].name);
            printf("\nPhone No.  : %s", c[i].phone);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("\nContact Not Found!\n");
}
void deleteContact()
{
    int id, i, j, found = 0;
    printf("\nEnter Contact ID to Delete: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++)
    {
        if (c[i].id == id)
        {
            found = 1;
            for (j = i; j < count - 1; j++)
            {
                c[j] = c[j + 1];
            }
            count--;
            printf("\nContact Deleted Successfully!\n");
            break;
        }
    }
    if (!found)
        printf("\nContact Not Found!\n");
}
int main()
{
    int choice;
    do
    {
        printf("\n===== Contact Management System =====");
        printf("\n1. Add Contact");
        printf("\n2. Display Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Delete Contact");
        printf("\n5. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                printf("\nThank You!\n");
                break;
            default:
                printf("\nInvalid Choice!\n");
        }
    }
     while (choice != 5);
    return 0;
}