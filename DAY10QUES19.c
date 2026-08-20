/*WRITE A PROGRAM TO CLASSIFY A TRIANGLE AS EQUILATERAL,ISOCELES,OR SCALENE BASED ON ITS SIDE LENGTHS */
// LET THE THREE LENGTHS BE a,b,c
#include<stdio.h>
int main(){
int a,b,c;

printf("enter a:");
scanf("%d",&a);

printf("enter b:");
scanf("%d",&b);

printf("enter c:");
scanf("%d",&c);

if(a==b && b==c)
{
    printf("equilateral");
}
else if(a==b || b==c || c==a)
{
    printf("isoceles");
}
else{
    printf("scalene");
}


    return 0;
}