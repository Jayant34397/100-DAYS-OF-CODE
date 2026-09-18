/*Multiply two matrices.*/

#include <stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2];

    printf("Enter first matrix:\n");
    scanf("%d%d%d%d", &a[0][0], &a[0][1], &a[1][0], &a[1][1]);

    printf("Enter second matrix:\n");
    scanf("%d%d%d%d", &b[0][0], &b[0][1], &b[1][0], &b[1][1]);

    c[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0];
    c[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1];
    c[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0];
    c[1][1] = a[1][0]*b[0][1] + a[1][1]*b[1][1];

    printf("Result:\n");
    printf("%d %d\n", c[0][0], c[0][1]);
    printf("%d %d\n", c[1][0], c[1][1]);

    return 0;
}