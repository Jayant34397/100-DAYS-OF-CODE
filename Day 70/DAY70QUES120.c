/*
Write a program to take a string input. Change it to sentence case.
*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[100];
    int i;

    fgets(s, 100, stdin);

    for(i = 0; s[i] != '\0'; i++)
    {
        if(i == 0)
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }

    printf("%s", s);

    return 0;
}