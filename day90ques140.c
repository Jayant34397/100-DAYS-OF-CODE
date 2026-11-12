/*Define a struct with enum Gender and print person's gender.*/

#include <stdio.h>

enum Gender { Male, Female };

struct Person {
    enum Gender g;
};

int main() {
    struct Person p;
    int n;

    printf("Enter gender (0 for Male, 1 for Female): ");
    scanf("%d", &n);

    p.g = n;

    if (p.g == 0)
        printf("Gender = Male");
    else
        printf("Gender = Female");

    return 0;
}
