//* The dereference operator is also known as an indirection operator

//*Why we use dereferencing pointer?
//*Dereference a pointer is used because of the following reasons:

//*It can be used to access or manipulate the data stored at the memory location, which is pointed by the pointer.
//*Any operation applied to the dereferenced pointer will directly affect the value of the variable that it points to.

#include <stdio.h>
int main()
{
    int x = 4;
    int y;
    int *ptr;
    ptr = &x;
    y = *ptr; // 4 - it  creates a copy of value  4
    *ptr = 5; // 5
    printf("The value of x is : %d", x);
    printf("\n The value of y is : %d", y);
    return 0;
}