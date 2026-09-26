/*
Reverse each word in a sentence without changing the word order.*/


#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i, j, start;

    printf("Enter a sentence: ");
    gets(str);

    start = 0;

    for(i = 0; i <= strlen(str); i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            for(j = i - 1; j >= start; j--)
            {
                printf("%c", str[j]);
            }

            if(str[i] == ' ')
                printf(" ");

            start = i + 1;
        }
    }

    return 0;
}