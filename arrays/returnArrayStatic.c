#include <stdio.h>
int *getarray()
{
    static int arr[7];
    printf("Enter the elements in an array : ");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}

// In the above code, we have created the variable arr[] as static in getarray() function, which is available throughout the program.
//  Therefore, the function getarray() returns the actual memory location of the variable 'arr'.
int main()
{
    int *ptr;
    ptr = getarray();
    printf("\nElements that you have entered are :");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", ptr[i]);
    }
}