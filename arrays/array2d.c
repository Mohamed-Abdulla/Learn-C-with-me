#include <stdio.h>

int main()
{
    // int i = 0, j = 0;
    // int arr[4][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}, {4, 5, 6}};
    // traversing 2D array
    // for (i = 0; i < 4; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("arr[%d] [%d] = %d \n", i, j, arr[i][j]);
    //     } // end of j
    // }     // end of i

    //~C 2D array example: Storing elements in a matrix and printing it.

    int arr[2][2], i, j;

    // now take input by looping them
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter arr[%d][%d] is", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // now print the matrix

    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d \t", arr[i][j]);
        }
    }

    return 0;
}