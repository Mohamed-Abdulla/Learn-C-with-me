
#include <stdio.h>
// C identifiers represent the name in the C program, for example, variables, functions, arrays, structures, unions, labels, etc.


/*
Rules for constructing C identifiers
The first character of an identifier should be either an alphabet or an underscore, and then it can be followed by any of the character, digit, or underscore.
It should not begin with any numerical digit.
In identifiers, both uppercase and lowercase letters are distinct. Therefore, we can say that identifiers are case sensitive.
Commas or blank spaces cannot be specified within an identifier.
Keywords cannot be represented as an identifier.
The length of the identifiers should not be more than 31 characters.
Identifiers should be written in such a way that it is meaningful, short, and easy to read.*/
int main()  
{  
    int a=10;  
    int A=20;  
    printf("Value of a is : %d",a);  
    printf("\nValue of A is :%d",A);  
    return 0;  
}  