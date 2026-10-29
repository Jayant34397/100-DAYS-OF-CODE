/*Write a program that reads text from input.txt, converts all lowercase letters to uppercase,
 and writes the result to output.txt.*/

 #include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL)
    {
        printf("File not found");
        return 0;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Text converted to uppercase successfully");

    return 0;
}