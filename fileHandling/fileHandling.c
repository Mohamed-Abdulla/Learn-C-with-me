// #include <stdio.h>
// void main()
// {
//     FILE *fp;
//     char ch;
//     fp = fopen("fileHandling.txt", "r");
//     while (1)
//     {
//         ch = fgetc(fp);
//         if (ch == EOF)
//             break;
//         printf("%c", ch);
//     }
//     fclose(fp);
// }

// writing a file
// #include <stdio.h>
// main()
// {
//     FILE *fp;
//     fp = fopen("file.txt", "w");               // opening file
//     fprintf(fp, "Hello file by fprintf...\n"); // writing data into file
//     fclose(fp);                                // closing file
// }

//~Reading File : fscanf() function

#include <stdio.h>
main()
{
    FILE *fp;
    char buff[255]; // creating char array to store data of file
    fp = fopen("file.txt", "r");
    while (fscanf(fp, "%s", buff) != EOF)
    {
        printf("%s ", buff);
    }
    fclose(fp);
}