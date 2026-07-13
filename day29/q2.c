#include <stdio.h>
int main()
{
    int arr[100], n, i, choice;
    int sum, max, min, key, found = 0, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    do
    {
        printf("\n===== MENU DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Find Sum of Elements\n");
        printf("4. Find Largest Element\n");
        printf("5. Find Smallest Element\n");
        printf("6. Search an Element\n");
        printf("7. Sort Array (Ascending)\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++)
                    scanf("%d", &arr[i]);
                break;
            case 2:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;
            case 3:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
                break;
            case 4:
                max = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Largest Element = %d\n", max);
                break;
            case 5:
                min = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < min)
                        min = arr[i];
                }
                printf("Smallest Element = %d\n", min);
                break;
            case 6:
                printf("Enter element to search: ");
                scanf("%d", &key);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Element not found.\n");
                break;
            case 7:
                for(i = 0; i < n - 1; i++)
                {
                    int j;
                    for(j = i + 1; j < n; j++)
                    {
                        if(arr[i] > arr[j])
                        {
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Array sorted successfully.\n");
                break;
            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 8);
    return 0;
}