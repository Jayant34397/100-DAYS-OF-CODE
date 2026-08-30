/* WRITE A PROGRAM TO CHECK IF A NUMBER IS PRIME*/

#include<stdio.h>
int main(){
    int n,i;

    printf("enter n:");
    scanf("%d",&n);

    for (i=2;i<=n;i++){
        if ( n % i == 0){
            printf("not a prime number");
            break;
        }
    }
if (n == i){
    printf("prime number");
} 
 
    return 0;
}