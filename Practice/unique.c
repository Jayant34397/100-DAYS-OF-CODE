/*find the unique number in the given array where all the elements are being repeated twice with one value being unique.*/

#include<stdio.h>
int main(){
    int a[7]={1,2,3,4,3,1,2};
    int unique = 0;
    for(int i = 0; i< 7;i++){
        unique = unique ^ a[i];
    }
    printf("the unique number is %d\n",unique);
    return 0;
}