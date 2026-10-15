#include<stdio.h>
int main(){
        int a[7]={-1,-2,-3,-4,-5,-6,-7};
    int max=a[0];
    for(int i=0;i<7;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("The maximum element is: %d\n", max);
    return 0;
}