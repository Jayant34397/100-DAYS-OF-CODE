/*Check if the elements on the diagonal of a matrix are distinct.*/

#include <stdio.h>
int main(){
    int a[3][3], i, j;
    int x, y, z;
    printf("Enter matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    x = a[0][0];
    y = a[1][1];
    z = a[2][2];

    if(x != y && y != z && x != z)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}