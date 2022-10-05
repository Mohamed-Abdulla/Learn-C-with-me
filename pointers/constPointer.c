/*
.Constant Pointers
.A constant pointer in C cannot change the address of the variable to which it is pointing, i.e., the address will remain constant.
.Therefore, we can say that if a constant pointer is pointing to some variable, then it cannot point to any other variable.


*/
// #include <stdio.h>
// int main()
// {
//     int a = 1;
//     int b = 2;
//     int *const ptr;
//     ptr = &a;
//     // ptr = &b;
//     printf("Value of ptr is :%d", *ptr);
//     return 0;
// }

/*

.Pointer to Constant
.A pointer to constant is a pointer through which the value of the variable that the pointer points cannot be changed.
.The address of these pointers can be changed, but the value of the variable that the pointer points cannot be changed.
*/

// #include <stdio.h>
// int main()
// {
//     int a = 100;
//     int b = 200;
//     const int *ptr;
//     ptr = &a;
//     ptr = &b;
//     *ptr = 300;
//     printf("Value of ptr is :%d", *ptr);
//     return 0;
// }

//*Constant Pointer to a Constant
//*A constant pointer to a constant is a pointer, which is a combination of the above two pointers.
//* It can neither change the address of the variable to which it is pointing nor it can change the value placed at this address

#include <stdio.h>
int main()
{
    int a = 10;
    int b = 90;
    const int *const ptr = &a;
    *ptr = 12;
    ptr = &b;
    printf("Value of ptr is :%d", *ptr);
    return 0;
}