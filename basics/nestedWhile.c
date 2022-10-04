#include <stdio.h>
int main()
{
    int rows;                             // variable declaration
    int columns;                          // variable declaration
    int k = 1;                            // variable initialization
    printf("Enter the number of rows :"); // input the number of rows.
    scanf("%d", &rows);
    printf("\nEnter the number of columns :"); // input the number of columns.
    scanf("%d", &columns);
    int a[rows][columns]; // 2d array declaration
    int i = 1;

    while (i <= rows)
    {
        int j = 1;

        while (j <= columns)
        {
            printf("%d\t", k);
            k++;
            j++;
        }

        i++;
        printf("\n");
    }
}