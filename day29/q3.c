#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int choice, i, len;
    do
    {
        printf("\n===== MENU DRIVEN STRING OPERATIONS =====\n");
        printf("1. Input String\n");
        printf("2. Display String\n");
        printf("3. Find String Length\n");
        printf("4. Reverse String\n");
        printf("5. Copy String\n");
        printf("6. Compare Two Strings\n");
        printf("7. Concatenate Two Strings\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();   // Clear newline from input buffer
        switch(choice)
        {
            case 1:
                printf("Enter a string: ");
                gets(str1);
                break;
            case 2:
                printf("String: %s\n", str1);
                break;
            case 3:
                len = 0;
                while(str1[len] != '\0')
                    len++;
                printf("Length = %d\n", len);
                break;
            case 4:
                len = 0;
                while(str1[len] != '\0')
                    len++;
                printf("Reversed String: ");
                for(i = len - 1; i >= 0; i--)
                    printf("%c", str1[i]);
                printf("\n");
                break;
            case 5:
                for(i = 0; str1[i] != '\0'; i++)
                    str2[i] = str1[i];
                str2[i] = '\0';
                printf("Copied String: %s\n", str2);
                break;
            case 6:
                printf("Enter second string: ");
                gets(str2);
                i = 0;
                while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
                    i++;
                if(str1[i] == str2[i])
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");
                break;
            case 7:
                printf("Enter second string: ");
                gets(str2);
                len = 0;
                while(str1[len] != '\0')
                    len++;
                i = 0;
                while(str2[i] != '\0')
                {
                    str1[len] = str2[i];
                    len++;
                    i++;
                }
                str1[len] = '\0';
                printf("Concatenated String: %s\n", str1);
                break;
            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    }
     while(choice != 8);
    return 0;
}