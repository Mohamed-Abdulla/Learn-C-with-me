#include <stdio.h>

int *fun()
{
    int y = 10;
    static int y1 = 10; //*static variable stores in the global memory.
    //*Therefore, we can say that the pointer 'p' is not a dangling pointer as
    //* it contains the address of the variable which is stored in the global memory.
    // return &y;
    return &y1;
}

int main()
{
    // int *ptr = (int *)malloc(sizeof(int));
    // int a = 560;
    // ptr = &a;
    // printf("%d ,%d", ptr, *ptr);
    // free(ptr);

    // .Variable goes out of the scope
    // .When the variable goes out of the scope then the pointer pointing to the variable becomes a dangling pointer.

    // char *str;
    // {
    //     char a = 'A';
    //     str = &a;
    // }
    // a falls out of scope
    // str is now a dangling pointer
    // printf("%s", *str);

    //~Explanation:

    // In the above code, we did the following steps:

    //.First, we declare the pointer variable named 'str'.
    //.In the inner scope, we declare a character variable. The str pointer contains the address of the variable 'a'.
    //.When the control comes out of the inner scope, 'a' variable will no longer be available, so str points to the de-allocated memory.
    //.It means that the str pointer becomes the dangling pointer.

    //*Now, we will see how the pointer becomes dangling when we call the function.

    int *p = fun();
    printf("%d", *p);

    /*
    In the above code, we did the following steps:

    First, we create the main() function in which we have declared 'p' pointer that contains the return value of the fun().
    When the fun() is called, then the control moves to the context of the int *fun(), the fun() returns the address of the 'y' variable.
    When control comes back to the context of the main() function, it means the variable 'y' is no longer available. Therefore,
    we can say that the 'p' pointer is a dangling pointer as it points to the de-allocated memory.
    */
    return 0;
}

/*
Avoiding Dangling Pointer Errors

The dangling pointer errors can be avoided by initializing the pointer to the NULL value.
If we assign the NULL value to the pointer, then the pointer will not point to the de-allocated memory.
Assigning NULL value to the pointer means that the pointer is not pointing to any memory location.


*/
