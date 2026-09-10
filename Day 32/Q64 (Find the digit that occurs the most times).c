// Q64: Find the digit that occurs the most times in an integer number.
/*
Sample Test Cases:
Input 1:
112233
Output 1:
1
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s", str);
    int counts[10] = {0};
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            counts[str[i] - '0']++;
        }
    }
    int max = -1;
    int max_digit = 0;
    for(int i = 0; i < 10; i++) {
        if(counts[i] > max) {
            max = counts[i];
            max_digit = i;
        }
    }
    printf("%d\n", max_digit);
    return 0;
}
