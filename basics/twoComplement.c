#include <stdio.h>
int main()
{
    int n; // variable declaration
    printf("Enter the number of bits do you want to enter :");
    scanf("%d", &n);

    char binary[n];
    char oneComplement[n];
    char twoComplement[n];

    int carry = 1;

    printf("Enter the binary number :");

    scanf("%s", binary);
    printf("%s", binary);

    printf("\nThe ones complement of the binary number is :");

    for (int i = 0; i < n; i++)
    {
        /* code */

        if (binary[i] == '1')
            oneComplement[i] = '0';
        else if (binary[i] == '0')
            oneComplement[i] = '1';
    }
    oneComplement[n] = '\0'; // Why
    printf("%s", oneComplement);

    printf("\nThe twos complement of a binary number is : ");

    // find 2's com in c

    for (int i = n; i >= 0; i--)
    {
        /* code */
        if (oneComplement[i] == '1' && carry == 1)
        {
            twoComplement[i] = '0';
        }
        else if (oneComplement[i] == '0' && carry == 1)
        {
            twoComplement[i] = '1';
            carry = 0;
        }
        else
        {
            twoComplement[i] = oneComplement[i];
        }
    }

    twoComplement[n] = '\0'; // Why

    printf("%s", twoComplement);

    return 0;
}