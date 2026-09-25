/*Find the longest word in a sentence.*/

#include <stdio.h>
int main(){
    char str[100];
    int i, count = 0, max = 0;

    printf("Enter a sentence: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            count++;
        }
        else
        {
            if(count > max)
                max = count;

            count = 0;
        }
    }

    if(count > max)
        max = count;

    printf("Length of longest word = %d", max);

    return 0;
}