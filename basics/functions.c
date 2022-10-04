#include <stdio.h>

int odd_even(int);
void main()
{
    int n, ans;

    printf("\nEnter the number: ");
    scanf("%d", &n);

    ans = odd_even(n);
    if (ans == 0)
    {
        printf("\nThe number is odd");
    }
    else
    {
        printf("\nThe number is even");
    }
}

odd_even(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}