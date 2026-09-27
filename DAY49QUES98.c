/*

Print initials of a name with the surname displayed in full*/

#include <stdio.h>
int main(){
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, 100, stdin);

    printf("Output: ");

    for(i = 0; name[i] != '\0'; i++)
    {
        if(i == 0)
        {
            printf("%c. ", name[i]);
        }
        else if(name[i] == ' ' && name[i + 1] != '\0')
        {
            printf("%c. ", name[i + 1]);
        }
    }

    i = 0;
    while(name[i] != '\0')
    {
        if(name[i] == ' ')
        {
            int j = i + 1;

            while(name[j] != '\0' && name[j] != '\n')
            {
                printf("%c", name[j]);
                j++;
            }
        }
        i++;
    }
    return 0;
}
