/*Find and print the student with the highest marks.*/
#include <stdio.h>

int main() {
    
    char students[5][50] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    int marks[5] = {85, 92, 78, 96, 88};
    int maxIndex = 0;

    
    for (int i = 1; i < 5; i++) {
        if (marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }


    printf("Student with the highest marks: %s\n", students[maxIndex]);
    printf("Highest marks: %d\n", marks[maxIndex]);

    return 0;
}