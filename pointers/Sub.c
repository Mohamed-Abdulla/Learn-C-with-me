#include <stdio.h>
int main()
{
    int number = 50;
    int *p;      // pointer to int
    p = &number; // stores the address of number variable
    printf("Address of p variable is %u \n", p);
    p = p - 3; // subtracting 3 from pointer variable
    printf("After subtracting 3: Address of p variable is %u \n", p);
    return 0;
}