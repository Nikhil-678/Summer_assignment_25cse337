#include <stdio.h>
int main() 
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int A[10][10], Transpose[10][10];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            Transpose[j][i] = A[i][j];
        }
    }
    printf("Transpose of the matrix is:\n");
    for (int i = 0; i < cols; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            printf("%d ", Transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}