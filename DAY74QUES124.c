/*Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc().*/


#include <stdio.h>

int main()
{
    FILE *src, *dest;
    char source[100], destination[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", destination);

    src = fopen(source, "r");

    if (src == NULL)
    {
        printf("Source file not found");
        return 1;
    }

    dest = fopen(destination, "w");

    if (dest == NULL)
    {
        printf("Cannot open destination file");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    printf("File copied successfully");

    fclose(src);
    fclose(dest);

    return 0;
}