/*Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
The program should print all the lines to the console until EOF */

#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while (fgets(str, 100, fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}