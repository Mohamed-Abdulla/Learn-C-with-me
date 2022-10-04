#include <stdio.h>
int main()
{
    // int i = 0;
    // int marks[5]; // declaration of array

    // int marks[] = {20, 30, 40, 50, 60};
    // marks[0] = 80; // initialization of array
    // marks[1] = 60;
    // marks[2] = 70;
    // marks[3] = 85;
    // marks[4] = 75;
    // traversal of array
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d \n", marks[i]);
    // } // end of for loop

    //~Sorting an array

    // int j, k, temp;
    // int a[10] = {10, 9, 7, 101, 23, 44, 12, 78, 34, 23};

    // for (int j = 0; j < 10; j++)
    // {
    //     for (int k = j + 1; k < 10; k++)
    //     {
    //         /* code */
    //         if (a[j] > a[k])
    //         {
    //             temp = a[j];
    //             a[j] = a[k];
    //             a[k] = temp;
    //         }
    //     }
    // }
    // printf("Printing Sorted Element List ...\n");
    // for (j = 0; j < 10; j++)
    // {
    //     printf("%d\n", a[j]);
    // }

    //~Program to print the largest and second largest element of the array.

    int arr[100], i, n, largest, sec_largest;
    printf("Enter the size of the array?");
    scanf("%d", &n);
    printf("Enter the elements of the array?");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    sec_largest = arr[1];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > sec_largest && arr[i] != largest)
        {
            sec_largest = arr[i];
        }
    }
    printf("largest = %d, second largest = %d", largest, sec_largest);

    return 0;
}