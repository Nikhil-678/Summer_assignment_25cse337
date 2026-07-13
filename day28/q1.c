#include <stdio.h>
#include <string.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
};
struct Book b[100];
int count = 0;
void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &b[count].id);
    printf("Enter Book Title: ");
    scanf(" %[^\n]", b[count].title);
    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[count].author);
    count++;
    printf("\nBook Added Successfully!\n");
}
void displayBooks()
{
    int i;
    if (count == 0)
    {
        printf("\nNo Books Available!\n");
        return;
    }
    printf("\n------ Book List ------\n");
    for (i = 0; i < count; i++)
    {
        printf("\nBook ID : %d", b[i].id);
        printf("\nTitle   : %s", b[i].title);
        printf("\nAuthor  : %s", b[i].author);
        printf("\n-------------------------");
    }
}
void searchBook()
{
    int id, i, found = 0;
    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++)
    {
        if (b[i].id == id)
        {
            printf("\nBook Found!");
            printf("\nBook ID : %d", b[i].id);
            printf("\nTitle   : %s", b[i].title);
            printf("\nAuthor  : %s", b[i].author);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("\nBook Not Found!\n");
}
void deleteBook()
{
    int id, i, j, found = 0;
    printf("\nEnter Book ID to Delete: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++)
    {
        if (b[i].id == id)
        {
            found = 1;
            for (j = i; j < count - 1; j++)
            {
                b[j] = b[j + 1];
            }
            count--;
            printf("\nBook Deleted Successfully!\n");
            break;
        }
    }
    if (!found)
        printf("\nBook Not Found!\n");
}
int main()
{
    int choice;
    do
    {
        printf("\n===== Library Management System =====");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Delete Book");
        printf("\n5. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                printf("\nThank You!\n");
                break;
            default:
                printf("\nInvalid Choice!");
        }
    } while (choice != 5);
    return 0;
}