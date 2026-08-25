/* WRITE A PROGRAM TO PRINT THE PRODUCT OF EVEN NUMBERS FROM 1 TO n*/

#include<stdio.h>
int main(){
int n,i,product = 1;

printf("enter n:");
scanf("%d",&n);

for(i=2;i<=n;i=i+2){
    product= product * i;
}
printf("%d",product);


    return 0;
}