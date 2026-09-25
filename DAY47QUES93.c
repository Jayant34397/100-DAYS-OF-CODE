/*Check if two strings are anagrams of each other.*/

#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    int count[26] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    if (strlen(a) != strlen(b))
    {
        printf("Not anagrams");
        return 0;
    }
    for (i = 0; a[i] != '\0'; i++)
    {
        count[a[i] - 'a']++;
        count[b[i] - 'a']--;
    }
    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }
    printf("Anagrams");

    return 0;
}