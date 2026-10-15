#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter n:");
        scanf("%d",&n);
    }while(n<=0);
    printf("%d",n);
    return 0;
}
