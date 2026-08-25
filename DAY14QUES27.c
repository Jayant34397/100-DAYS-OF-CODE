/* WRITE A PROGRAM TO PRINT THE SUM OF THE FIRST n ODD NUMBERS  */

#include<stdio.h>
int main(){

int n,i,sum=0;

printf("enter n:");
scanf("%d",&n);

for(i=1;i<=n;i=i+2){
    sum=sum+i;
}
printf("%d",sum);
 return 0;
}