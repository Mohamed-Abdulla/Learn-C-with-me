/*
Incrementing Pointer in C
If we increment a pointer by 1, the pointer will start pointing to the immediate next location.
This is somewhat different from the general arithmetic since the value of the pointer
 will get increased by the size of the data type to which the pointer is pointing.

We can traverse an array by using the increment operation on a pointer which will keep pointing to every element of the array,
perform some operation on that, and update itself in a loop.

The Rule to increment the pointer is given below:

new_address= current_address + i * size_of(data type)
Where i is the number by which the pointer get increased.

32-bit
For 32-bit int variable, it will be incremented by 2 bytes.

64-bit
For 64-bit int variable, it will be incremented by 4 bytes


*/

#include <stdio.h>
void traverse();
int main()
{
    int number = 50;
    int *p;      // pointer to int
    p = &number; // stores the address of number variable
    printf("Address of p variable is %u \n", p);
    p = p + 1;                                                    // increased by 4 bytes since its 64 bit
    printf("After increment: Address of p variable is %u \n", p); // in our case, p will get incremented by 4 bytes.

    traverse();
    return 0;
}

//~Traversing an array by using pointer

void traverse()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr; // it stores the first element of the array address
    int i;
    printf("printing array elements...\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ", *(p + i));
    }
}
