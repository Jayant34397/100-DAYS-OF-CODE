/* WRITE A PROGRAM TO INPUT AN INTEGER AND CHECK WHETHER IT IS POSITIVE,NEGATIVE OR ZERO USING NESTED IF-ELSE*/

#include<stdio.h>
int main(){
int num;

printf("enter integer:");
scanf("%d",&num);

if(num>=1) {
    printf("positive");
}
else if (num<=-1) {
    printf("negative");
}
else {
    printf("zero");
}

    return 0;
}