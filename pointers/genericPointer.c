#include <stdio.h>

int main()
{

    int a = 1025;
    int *p = &a;
    // void pointer  - generic pointer

    void *p0;
    p0 = p; // we dont need to explicitly tell the datatype by typecasting. it won't give compilation error.

    printf("Address = %d", p0); //~we cannot derefernce it because it is not mapped to any datatype.
}