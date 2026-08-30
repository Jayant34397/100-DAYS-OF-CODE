/*WRITE A PROGRAM TO FIND THE SUM OF DIGITS OF A NUMBER*/

#include<stdio.h>
int main(){
    int n ,sum=0,digit;

    printf("enter number:");
    scanf("%d",&n);

    for(; n>0; n=n/10)
    {
        digit = n % 10;
        sum = sum + digit;
    }
printf("sum of digit is %d",sum);

    return 0;
}