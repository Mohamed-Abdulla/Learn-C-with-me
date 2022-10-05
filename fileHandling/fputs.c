#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *fp;
    // clrscr();

    fp = fopen("myfile2.txt", "w");
    fputs("hello c programming", fp);
    fputs("hello c programming", fp);

    fclose(fp);
    getch();
}