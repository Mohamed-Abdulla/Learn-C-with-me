#include <stdio.h>
int main()
{
    int n; // variable declaration
    printf("Enter the value of n :");
    scanf("%d", &n);
    // Displaying the n tables.
    for (int i = 1; i <= n; i++)
    {
        /* code */

        for (int j = 1; j <= 10; j++)
        {
            printf("%d\t", i * j);
        }

        printf("\n");
    }
}