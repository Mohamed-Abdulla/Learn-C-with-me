#include <stdio.h>

// union abc
// {
//     int a;
//     char b;
// };

// int main()
// {
//     union abc *ptr; // pointer variable declaration
//     union abc var;
//     var.a = 90;
//     var.b = 'a'; // ascii value
//     ptr = &var;

//     printf("The value of a is : %d", ptr->a);
//     return 0;
// }

// struct store
// {
//     double price;
//     char *title;
//     char *author;
//     int number_pages;
//     int color;
//     int size;
//     char *design;
// };

// int main()
// {
//     struct store book;
//     book.title = "C programming";
//     book.author = "Paulo Cohelo";
//     book.number_pages = 190;
//     book.price = 205;
//     printf("Size is : %ld bytes", sizeof(book));
//     return 0;
// }

// refer .txt

struct store
{
    double price;
    union
    {
        struct
        {
            char *title;
            char *author;
            int number_pages;
        } book;

        struct
        {
            int color;
            int size;
            char *design;
        } shirt;
    } item;
};
int main()
{
    struct store s;
    s.item.book.title = "C programming";
    s.item.book.author = "John";
    s.item.book.number_pages = 189;
    printf("Size is %ld", sizeof(s));
    return 0;
}