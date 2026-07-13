#include <stdio.h>
#include <string.h>
int main()
{
    char title[50][50], author[50][50];
    int bookId[50];
    int n = 0, choice, i, found;
    char search[50];
    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &bookId[n]);
                printf("Enter Book Title: ");
                scanf("%s", title[n]);
                printf("Enter Author Name: ");
                scanf("%s", author[n]);
                n++;
                printf("\nBook Added Successfully!\n");
                break;
            case 2:
                if(n == 0)
                {
                    printf("\nNo Books Available!\n");
                }
                else
                {
                    printf("\n----- Library Books -----\n");
                    printf("ID\tTitle\t\tAuthor\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t\t%s\n",
                               bookId[i], title[i], author[i]);
                    }
                }
                break;
            case 3:
                if(n == 0)
                {
                    printf("\nNo Books Available!\n");
                    break;
                }
                printf("\nEnter Book Title to Search: ");
                scanf("%s", search);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(strcmp(title[i], search) == 0)
                    {
                        printf("\nBook Found!\n");
                        printf("Book ID : %d\n", bookId[i]);
                        printf("Title   : %s\n", title[i]);
                        printf("Author  : %s\n", author[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("\nBook Not Found!\n");
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