//~The strlen() function returns the length of the given string. It doesn't count null character '\0'

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char ch[20] = {'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};
//     printf("Length of string is: %d", strlen(ch));
//     return 0;
// }

//~The strcpy(destination, source) function copies the source string in destination.

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char ch[20] = {'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};
//     char ch2[20];
//     strcpy(ch2, ch); // destination,source
//     printf("Value of second string is: %s", ch2);
//     return 0;
// }

//~The strcat(first_string, second_string) function concatenates two strings and result is returned to first_string.

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char ch[10] = {'h', 'e', 'l', 'l', 'o', '\0'};
//     char ch2[10] = {'c', '\0'};
//     strcat(ch, ch2);
//     printf("Value of first string is: %s", ch);
//     return 0;
// }

//~The strcmp(first_string, second_string) function compares two string and returns 0 if both strings are equal.

//~Here, we are using gets() function which reads string from the console.

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[20], str2[20];
//     printf("Enter 1st string: ");
//     gets(str1); // reads string from console
//     printf("Enter 2nd string: ");
//     gets(str2);
//     if (strcmp(str1, str2) == 0)
//         printf("Strings are equal");
//     else
//         printf("Strings are not equal");
//     return 0;
// }

//~The strrev(string) function returns reverse of the given string. Let's see a simple example of strrev() function.

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20];
//     printf("Enter string: ");
//     gets(str); // reads string from console
//     printf("String is: %s", str);
//     printf("\nReverse String is: %s", strrev(str));
//     return 0;
// }

//~The strlwr(string) function returns string characters in lowercase. Let's see a simple example of strlwr() function

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20];
//     printf("Enter string: ");
//     gets(str); // reads string from console
//     printf("String is: %s", str);
//     printf("\nLower String is: %s", strlwr(str));
//     return 0;
// }

//~The strupr(string) function returns string characters in uppercase. Let's see a simple example of strupr() function.

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20];
//     printf("Enter string: ");
//     gets(str); // reads string from console
//     printf("String is: %s", str);
//     printf("\nUpper String is: %s", strupr(str));
//     return 0;
// }

//~The strstr() function returns pointer to the first occurrence of the matched string in the given string.
//~It is used to return substring from first match till the last character.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100] = "this is javatpoint with c and java";
    char *sub;
    sub = strstr(str, "java");
    printf("\nSubstring is: %s", sub);
    return 0;
}