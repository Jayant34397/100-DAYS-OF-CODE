/*Convert a lowercase string to uppercase without using built-in functions.*/

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a lowercase string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        str[i] = str[i] - 32;
    }

    printf("Uppercase string: %s", str);

    return 0;
}