/* WRITE A PROGRAM TO CALCULATE THE FACTORIAL OF THE NUMBER */

#include<stdio.h>
int main(){
int n,i,factorial=1;

printf("enter n:");
scanf("%d",&n);

for(i=1;i<=n;i++){
    factorial = factorial * i ;
}
printf("%d\n",factorial);


    return 0;
}