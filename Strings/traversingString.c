#include <stdio.h>
void main()
{
    char s[8] = "abdulla";
    int i = 0;
    int count = 0;
    // while (i < 8)
    // or
    while (s[i] != NULL)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
        {
            count++;
        }
        i++;
    }
    printf("The number of vowels %d", count);
}
