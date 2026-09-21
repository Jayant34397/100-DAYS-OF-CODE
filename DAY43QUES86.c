/*Check if a string is a palindrome.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    if (strcmp(str, strrev(str)) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}