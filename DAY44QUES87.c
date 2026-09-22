/*Count spaces, digits, and special characters in a string.*/

#include <stdio.h>
int main(){
    char str[100];
    int i, space = 0, digit = 0, special = 0;

    printf("Enter string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            space++;

        if(str[i] >= '0' && str[i] <= '9')
            digit++;

        if(str[i] == '@' || str[i] == '#' || str[i] == '$')
            special++;
    }
    printf("Spaces = %d\n", space);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d\n", special);

    return 0;
}